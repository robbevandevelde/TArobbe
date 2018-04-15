//
// Created by robbe on 11/03/2018.
//

#ifndef SSC_TRANSITION_H
#define SSC_TRANSITION_H

#include <vector>
#include "State.h"

class NFA_Transition {
private:
    State* from;
    vector <State*> to;
    string input;

public:
    State *getFrom() const;

    void setFrom(State *from);

    vector<State*> getTo() const;

    void setTo(State *naar);

    const string &getInput() const;

    void setInput(const string &input);

    NFA_Transition(State* from1, vector<State*> to1, string& label){from= from1, to= to1, input= label;};




};


#endif //SSC_TRANSITION_H
