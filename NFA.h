//
// Created by robbe on 10/03/2018.
//

#ifndef SSC_NFA_H
#define SSC_NFA_H
#include <iostream>
#include <fstream>
#include "State.h"
#include "Transition.h"
#include <json.h>
#include <set>

using namespace std;
class NFA {
private:
    vector<string> alfabet;

public:
    NFA(string& NFAjson);

};


#endif //SSC_NFA_H
