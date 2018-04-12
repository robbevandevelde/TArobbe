//
// Created by robbe on 10/03/2018.
//

#include "NFA.h"
//https://en.wikibooks.org/wiki/JsonCpp    Als bron
NFA::NFA(string &NFAjson) {
    ifstream ifs(NFAjson);
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj);
    const Json::Value &alphabet = obj["alphabet"];
    if(alphabet!=NULL) {
        for (int i = 0; i < alphabet.size(); i++) {
            alfabet.push_back(alphabet[i].asString());
        }
    }
    const Json::Value& states = obj["states"];
    if(states!=NULL) {
        for (int i = 0; i < states.size(); i++) {
            string naamState = states.(states[i]["name"].asString());
            bool startingState = states.(states[i]["starting"].asBool());
            bool acceptingState = states.(states[i]["accepting"].asBool());
            State *State = new State(naamState, startingState, acceptingState);
            NFAstates.push_back(State);
        }
    }

    Json::Value transitions = obj["transitions"];
    if(transitions!=NULL){
        for (int i = 0; i < transitions.size(); i++) {
            string from = transitions.(transitions[i]["from"].asString());
            string to = transitions.(transitions[i]["to"].asString());
            string input = transitions.(transitions[i]["input"].asString());
            State* fromState;                  // declare states
            State* toState;
            vector <State*> vectorIfNewTrans;
            bool isValidInput = false;
            bool isValidStateFrom = false;
            bool isValidStateTo = false;
            //check in input is correct
            for(string inputIT : alfabet){
                if (inputIT == input){
                    isValidInput = true;
                }
            }
            for (auto &statesIT : NFAstates){
                if(from == statesIT->getName()) {
                    isValidStateFrom == true;
                    fromState = statesIT;
                }
                if(to == statesIT->getName()) {
                    isValidStateTo = true;
                    toState = statesIT;
                }
            }
            if(isValidInput== true && isValidStateFrom == true && isValidStateTo == true){
                for(auto trans : NFAtransitions){
                    if(trans->getFrom()== fromState && trans->getInput() == input)
                        trans->setTo(toState);
                    else{
                        vectorIfNewTrans.push_back(toState);
                        NFA_Transition* transition = new NFA_Transition(fromState, vectorIfNewTrans, input);
                        NFAtransitions.push_back(transition);
                    }
                }
            }
            else{
                cout << "Geen jusite trans" <<endl;
                return;
            }
        }
    }
    else{
        cout<< "geen transitie gevonden"<<endl;
    }

}

void NFA::SSC() {
    DFA* NEW_DFA = new DFA;
    for (auto states : NFAstates){
        if( states->isStart() == true){
            NEW_DFA->addState(states);
            for(auto i : alfabet){
                new State(false, false, false) = getTrans(states, i);
            }
        }
    }


}

vector<State*> NFA::getTrans(State *from, string input) {       // transitions need to be a vector
    for (auto trans : NFAtransitions){
        if(trans->getFrom() == from && trans->getInput() == input){
            return trans->getTo();
        }
    }

}
