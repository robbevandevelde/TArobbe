//
// Created by robbe on 12/04/2018.
//

#include "DFA_Transition.h"

const vector<State *> &DFA_Transition::getFrom() const {
    return from;
}

void DFA_Transition::setFrom(const vector<State *> &from) {
    DFA_Transition::from = from;
}

const vector<State *> &DFA_Transition::getTo() const {
    return to;
}

void DFA_Transition::setTo(const vector<State *> &to) {
    DFA_Transition::to = to;
}

const char &DFA_Transition::getInput() const {
    return input;
}

void DFA_Transition::setInput(const char &input) {
    DFA_Transition::input = input;
}

void DFA_Transition::appendTo(State *state) {
    to.push_back(state);
}

void DFA_Transition::appendFrom(State *state) {
    from.push_back(state);

}
