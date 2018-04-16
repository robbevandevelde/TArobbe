//
// Created by robbe on 12/04/2018.
//

#ifndef SSC_DFA_TRANSITION_H
#define SSC_DFA_TRANSITION_H

#include <vector>
#include "State.h"

class DFA_Transition {
private:
    vector <State*> from;
    vector <State*> to;

    char input;
public:
    const vector<State *> &getFrom() const;

    void setFrom(const vector<State *> &from);

    const vector<State *> &getTo() const;

    void setTo(const vector<State *> &to);

    const char &getInput() const;

    void setInput(const char &input);

    DFA_Transition(vector<State*> from1, vector<State*> to1, char& label){from= from1, to= to1, input= label;};

    void appendTo(State * state);

    void appendFrom(State * state);



};


#endif //SSC_DFA_TRANSITION_H
