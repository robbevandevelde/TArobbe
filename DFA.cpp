//
// Created by robbe on 11/04/2018.
//

#include <fstream>
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

void DFA::addAlfabet(vector<char> alf) {
    alfabet = alf;

}

const vector<DFA_Transition *> &DFA::getDFAtransitions() const {
    return DFAtransitions;
}

void DFA::toDot() {
    ofstream myfile;
    myfile.open("dfa.dt");
    myfile << "dfa {";
    myfile << "rankdir=LR";
    for(auto stat: DFAstates){
        for(auto sub : stat){
            if(sub->isStart() == true && stat.size() == 1){
                myfile << "invis ->  "<< getAllNames(stat) << "[ label = Start ]"<<endl;
            }
            if(sub->isAccepting() == true){
                myfile << "node [shape = doublecircle];" << getAllNames(stat)<<endl;
            }
        }
    }

    myfile << "}";

    myfile.close();

}

string DFA::getAllNames(vector<State*> state) {
    vector<string> stateNames;

    for(auto subState : state){
        stateNames.push_back(subState->getName());
    }

    string *names;
    names = new string[stateNames.size()];
    for(int i=0; i<stateNames.size(); i++){
        names[i] = stateNames[i];//Copy the vector to the string
    }
    return *names;
}
