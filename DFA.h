//
// Created by robbe on 11/04/2018.
//

#ifndef SSC_DFA_H
#define SSC_DFA_H
#include <vector>
#include "State.h"
#include "DFA_Transition.h"
using namespace std;

class DFA {
private:
    vector<string> alfabet;
    vector<DFA_Transition*> DFAtransitions;
    vector <vector<State*>> DFAstates;
public:
    void addState(vector<State*> vectState);
    void addTransition(DFA_Transition* tran);
    bool alreadyInStates(vector<State*> checkState);
    vector <vector<State*>> returnDFAStates();
};


#endif //SSC_DFA_H
