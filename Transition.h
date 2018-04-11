//
// Created by robbe on 11/03/2018.
//

#ifndef SSC_TRANSITION_H
#define SSC_TRANSITION_H

#include <vector>
#include "State.h"

class Transition {
private:
    State* from;
    State* to;
    string input;
public:
    State *getFrom() const;

    void setFrom(State *from);

    State *getTo() const;

    void setTo(State *to);

    const string &getInput() const;

    void setInput(const string &input);

public:
    Transition(State* from1, State* to1, string& label){from= from1, to= to1, input= label;};
    bool isLegit(State* from, State* to);

};


#endif //SSC_TRANSITION_H
