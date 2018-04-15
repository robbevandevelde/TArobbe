//
// Created by robbe on 11/04/2018.
//

#include "DFA.h"

void DFA::addState(vector<State*> vectState) {
    DFAstates.push_back(vectState);
}

void DFA::addTransition(DFA_Transition *tran) {
    DFAtransitions.push_back(tran);

}

bool DFA::alreadyInStates(vector<State*> checkState) {
    for(auto i : DFAstates){
        if (checkState == i){
            return true;
        }
    }
    return false;
}

vector<vector<State *>> DFA::returnDFAStates() {
    return DFAstates;
}
