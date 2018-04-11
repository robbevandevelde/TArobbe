//
// Created by robbe on 11/04/2018.
//

#ifndef SSC_DFA_H
#define SSC_DFA_H
#include <vector>
#include "State.h"
#include "Transition.h"
using namespace std;

class DFA {
private:
    vector<string> alfabet;
    vector<Transition*> DFAtransitions;
    vector <State*> DFAstates;
public:
    void addState(State*);
};


#endif //SSC_DFA_H
