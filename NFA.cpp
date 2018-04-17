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
    DFA* NEW_DFA = new DFA;                 //maak een nieuwe DFA aan

    string gr = "Garbage";
    State* garbage = new State(gr, false, false);
    garbageState.push_back(garbage);        //maak garbage state aan
    NEW_DFA->addAlfabet(alphabet);          //voeg alfabet toe aan dfa

    bool isInDFA = false;                   //controle bools
    bool isInTrans = false;

    NEW_DFA->addState(garbageState);        //add garbage state aan dfa toe

    for (auto statesIT : NFAstates){
        //gaat over de NFA states tot hij het startpunt heeft gevonden en maakt nieuwe states aan van deze zijn transities
        if( statesIT->isStart() == true){
            vector <State*> firstState;
            firstState.push_back(statesIT);
            NEW_DFA->addState(firstState);
            for(auto i : alphabet){
                NEW_DFA->addState(getTrans(statesIT, i));
                DFA_Transition* transition = new DFA_Transition(firstState, getTrans(statesIT, i), i);
                NEW_DFA->addTransition(transition);
            }
        }
    }
    //nadat je de eerste states hebt toegevoegd kan je de dfa states overlopen
    for (auto statesIT2 : NEW_DFA->returnDFAStates()){
        for ( auto substate : statesIT2){  // ga binnenin de states kijken
            for (auto i : alphabet){
                vector <State*> newState;
                vector <State*> transFromSub = getTrans(substate, i);
                for (auto statesFromSub:transFromSub){
                    newState.push_back(statesFromSub);      //voegt alle mogelijke states toe in loop
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
                    DFA_Transition* transition = new DFA_Transition(statesIT2, newState, i);
                    NEW_DFA->addTransition(transition);
                }
                else{
                    if (statesIT2.size()== 1){
                        for( auto transitions : NEW_DFA->getDFAtransitions()){
                            if (transitions->getFrom().size() == statesIT2.size()){
                                int j = 0;
                                for (j ; j<statesIT2.size();j++){
                                    if(transitions->getFrom()[j]->getName() == statesIT2[j]->getName()
                                       && transitions->getInput() == i){
                                        isInTrans = true;

                                    }
                                }
                            }
                        }
                    }
                    if(statesIT2.size()>1){
                        int ctr = 0;
                        isInTrans = false;
                        for( auto transitions : NEW_DFA->getDFAtransitions()) {
                            if (transitions->getFrom().size() == statesIT2.size()) {
                                int j = 0;
                                for (j; j < statesIT2.size(); j++) {
                                    if (transitions->getFrom()[j]->getName() == statesIT2[j]->getName()
                                        && transitions->getInput() == i) {
                                        ctr += 1;
                                    }
                                }
                            }
                        }
                        if (ctr == statesIT2.size()){
                            isInTrans = true;
                        }
                    }
                }
                if(isInTrans != true){
                    DFA_Transition* transition = new DFA_Transition(statesIT2, newState, i);
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
