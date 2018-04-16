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
            State* newState = new State(naamState, acceptingState, startingState);
            nfaStates.push_back(newState);
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
            bool hasBeenAdded = false; //true if its already been added to trans
            //check in input is correct
            for(auto inputIT : alfabet){
                if (inputIT == input){
                    isValidInput = true;
                }
            }
            for (auto statesIT : nfaStates){
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
                if(nfaTrans.size()!= 0) {
                    for (auto trans : nfaTrans) {
                        if (trans->getFrom() == fromState && trans->getInput() == input) {
                            trans->setTo(toState);
                            hasBeenAdded = true;
                        }

                    }
                    if(hasBeenAdded != true){
                        vectorIfNewTrans.push_back(toState);
                        NFA_Transition *transition = new NFA_Transition(fromState, vectorIfNewTrans, input);
                        nfaTrans.push_back(transition);
                    }
                }
                else{
                    vectorIfNewTrans.push_back(toState);
                    NFA_Transition *transition = new NFA_Transition(fromState, vectorIfNewTrans, input);
                    nfaTrans.push_back(transition);
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



DFA NFA::SSC() {
    string gr = "Garbage";
    State* garbage = new State(gr, false, false);
    garbageState.push_back(garbage);


    DFA* NEW_DFA = new DFA;
    NEW_DFA->addAlfabet(alphabet);
    bool isInDFA = false;
    for (auto states : NFAstates){
        if( states->isStart() == true){
            vector <State*> firstState;
            firstState.push_back(states);
            NEW_DFA->addState(firstState);
            for(auto i : alphabet){
                NEW_DFA->addState(getTrans(states, i));
                DFA_Transition* transition = new DFA_Transition(firstState, getTrans(states, i), i);
                NEW_DFA->addTransition(transition);
                NEW_DFA->addState(garbageState);
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
                for(auto check : NEW_DFA->returnDFAStates()){       //kijk na of de state al in de DFA zit
                    if(check.size() == newState.size()){
                        int reference = check.size();
                        int equalsCounter = 0;
                        int i = 0;
                        for (i; i<check.size(); i++){
                            if (check[i]->getName()==newState[i]->getName()){
                                equalsCounter+=1;
                            }
                        }
                        if(equalsCounter == reference){
                            isInDFA = true;
                        }
                    }

                }
                if(isInDFA != true){
                    NEW_DFA->addState(newState);
                    DFA_Transition* transition = new DFA_Transition(states, newState, i);
                    NEW_DFA->addTransition(transition);
                }

            }

        }
    }
    return *NEW_DFA;
}

vector<State*> NFA::getTrans(State *from, char input) {       // transitions need to be a vector
    for (auto trans : NFAtransitions){
        if(trans->getFrom() == from && trans->getInput() == input){
            return trans->getTo();
        }
    }
    return garbageState;

}
