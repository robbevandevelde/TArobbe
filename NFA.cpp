//
// Created by robbe on 10/03/2018.
//

#include "NFA.h"
//https://en.wikibooks.org/wiki/JsonCpp    Als bron
NFA::NFA(string &NFAjson) {
    ifstream ifs(NFAjson);
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj);
    const Json::Value &alphabet = obj["alphabet"];
    for (int i = 0; i < alphabet.size(); i++) {
        alfabet.push_back(alphabet[i].asString());
    }
    const Json::Value& states = obj["states"];
    for (int i = 0; i < states.size(); i++) {
        string naamState = states.(states[i]["name"].asString());
        bool startingState = states.(states[i]["starting"].asBool());
        bool acceptingState = states.(states[i]["accepting"].asBool());
        State* State = new State(naamState, startingState, acceptingState);
        NFAstates.push_back(State);
    }

    const Json::Value& transitions = obj["transitions"];
    for (int i = 0; i < transitions.size(); i++) {
        string from = transitions.(transitions[i]["from"]);
        string to = transitions.(transitions[i]["to"]);
        string input = transitions.(transitions[i]["input"].asString());
        State*
        //new Transition(from, to, input);
    }
}

void NFA::SSC() {

}
