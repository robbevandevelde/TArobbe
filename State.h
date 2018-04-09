//
// Created by robbe on 10/03/2018.
//

#ifndef SSC_STATE_H
#define SSC_STATE_H
#include <string>
#include <vector>
using namespace std;

class State {
private:
    bool accepting;
    bool start;
    string name;

public:
    State(string &Name, bool Accept, bool Start){accepting= Accept, start= Start, name = Name;}

    bool isAccepting() const {
        return accepting;
    }

    void setAccepting(bool accepting) {
        State::accepting = accepting;
    }

    bool isStart() const {
        return start;
    }

    void setStart(bool start) {
        State::start = start;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        State::name = name;
    }

    bool inStates(State state) {
        return false;
    }
};


#endif //SSC_STATE_H
