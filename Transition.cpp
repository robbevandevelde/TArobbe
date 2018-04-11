//
// Created by robbe on 11/03/2018.
//

#include "Transition.h"

bool Transition::isLegit(State *from, State *to) {
    return false;
}

State *Transition::getFrom() const {
    return from;
}

void Transition::setFrom(State *from) {
    Transition::from = from;
}

State *Transition::getTo() const {
    return to;
}

void Transition::setTo(State *to) {
    Transition::to = to;
}

const string &Transition::getInput() const {
    return input;
}

void Transition::setInput(const string &input) {
    Transition::input = input;
}
