//
// Created by robbe on 10/03/2018.
//

#ifndef SSC_NFA_H
#define SSC_NFA_H
#include <iostream>
#include <fstream>
//#include "State.h"
#include "NFA_Transition.h"
#include <json.h>
#include <set>
#include "DFA.h"
using namespace std;
class NFA {
private:
    vector<string> alfabet;
    vector<NFA_Transition*> NFAtransitions;
    vector <State*> NFAstates;

public:
    NFA(string& NFAjson);
    void SSC();
    vector<State*> getTrans(State* from, string input);

};


#endif //SSC_NFA_H
