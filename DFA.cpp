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
    myfile << "digraph dfa {"<<endl;
    myfile << "rankdir=LR;"<<endl;
    for(auto stat: DFAstates){
        for(auto sub : stat){
            if(sub->isAccepting() == true){
                myfile << "node [shape = doublecircle];" << getAllNames(stat)<<endl;
            }
            if (sub->isAccepting() != true && sub->isStart() != true){
                myfile << "node [shape = circle];" << getAllNames(stat)<<";"<<endl;
            }
            if(sub->isStart() == true && stat.size() == 1){
                myfile << "node [shape = circle];" << getAllNames(stat)<<";"<<endl;
            }
        }
    }
    for(auto stat: DFAstates) {
        for (auto sub : stat) {
            if(sub->isStart() == true && stat.size() == 1) {
                myfile << "node [style = invis]  invis" << endl;
                myfile << "invis -> " << getAllNames(stat) << "[ label = Start ];" << endl;
            }
        }
    }
    for (auto trans : getDFAtransitions()){
        string nameF = getAllNames(trans->getFrom());
        string nameT = getAllNames(trans->getTo());
        char input = trans->getInput();
        myfile << nameF << " -> " << nameT << "[label= "<< input << "]"<<endl;
    }


    myfile << "}";

    myfile.close();

}

string DFA::getAllNames(vector<State*> state) {
    vector<string> stateNames;

    for(auto subState : state){
        stateNames.push_back(subState->getName());
    }

    string names;

    for(int i=0; i<stateNames.size(); i++){
        names=names + stateNames[i];          //Copy the vector to the string
    }
    return names;
}
