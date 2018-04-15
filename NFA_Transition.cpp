//
// Created by robbe on 11/03/2018.
//

#include "NFA_Transition.h"



State *NFA_Transition::getFrom() const {
    return from;
}

void NFA_Transition::setFrom(State *from) {
    NFA_Transition::from = from;
}

vector <State*> NFA_Transition::getTo() const {
    return to;
}

void NFA_Transition::setTo(State *naar) {
    to.push_back(naar);
}

const string &NFA_Transition::getInput() const {
    return input;
}

void NFA_Transition::setInput(const string &input) {
    NFA_Transition::input = input;
}
