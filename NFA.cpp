//
// Created by robbe on 10/03/2018.
//

#include "NFA.h"
//https://en.wikibooks.org/wiki/JsonCpp    Als bron voor prsen met jsonCPP
NFA::NFA(const string &NFAjson) {
    ifstream ifs(NFAjson);
    Json::Value obj;
    ifs >> obj;

    //parse het alfabet en plaats dit in een vector
    vector <char> alfabet;
    Json::Value alphabet = obj.get("alphabet", "geen alfabet");
        for (int i = 0; i < alphabet.size(); i++) {
            alfabet.push_back(alphabet[i].asString()[0]);
        }

    //parse states uit file en voeg de state toe aan een statesvector van de NFA
    vector <State*> nfaStates;
    Json::Value states = obj.get("states", "geen states");
        for (int i = 0; i < states.size(); i++) {
            string naamState = states[i].get("name", "name not found").asString();
            bool startingState = states[i].get("starting", false).asBool();
            bool acceptingState = states[i].get("accepting", false).asBool();
            State newState = State(naamState, startingState, acceptingState);
            nfaStates.push_back(&newState);
        }

    //parse de transitions slechts als de from en to state correct is en deze een juiste input string hebben
    vector <NFA_Transition*> nfaTrans;
    Json::Value transitions = obj.get("transitions", "geen trans");
        for (int i = 0; i < transitions.size(); i++) {
            string from = transitions[i].get("from", "from not found").asString();
            string to = transitions[i].get("to", "to not found").asString();
            char input = transitions[i].get("input", "input not found").asString()[0];
            State* fromState;                  // declare states
            State* toState;
            vector <State*> vectorIfNewTrans;
            bool isValidInput = false;
            bool isValidStateFrom = false;
            bool isValidStateTo = false;
            //check in input is correct
            for(auto inputIT : alfabet){
                if (inputIT == input){
                    isValidInput = true;
                }
            }
            for (auto &statesIT : nfaStates){
                if(from == statesIT->getName()) {
                    isValidStateFrom = true;
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
                        nfaTrans.push_back(transition);
                    }
                }
            }
            else{
                cout << "Geen jusite trans" <<endl;
                return;
            }
        }
    this->NFAtransitions = nfaTrans;
    this->NFAstates = nfaStates;
    this->alphabet = alfabet;
    }



void NFA::SSC() {
    DFA* NEW_DFA = new DFA;
    for (auto states : NFAstates){
        if( states->isStart() == true){
            vector <State*> firstState;
            firstState.push_back(states);
            NEW_DFA->addState(firstState);
            for(auto i : alphabet){
                NEW_DFA->addState(getTrans(states, i));
                DFA_Transition* transition = new DFA_Transition(firstState, getTrans(states, i), i);
                NEW_DFA->addTransition(transition);
            }
        }
    }
    for (auto states : NEW_DFA->returnDFAStates()){
        for ( auto substate : states){
            for (auto i : alphabet){
                vector <State*> newState;
                vector <State*> transFromSub = getTrans(substate, i);
                for (auto statesFromSub:transFromSub){
                    newState.push_back(statesFromSub);
                }
                NEW_DFA->addState(newState);
                DFA_Transition* transition = new DFA_Transition(states, newState, i);
                NEW_DFA->addTransition(transition);
            }

        }
    }
}

vector<State*> NFA::getTrans(State *from, char input) {       // transitions need to be a vector
    for (auto trans : NFAtransitions){
        if(trans->getFrom() == from && trans->getInput() == input){
            return trans->getTo();
        }
    }

}
