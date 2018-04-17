#include <iostream>
#include "NFA.h"
#include "DFA.h"
int main() {
    NFA file = NFA("NFA.json");
    DFA newdfa = file.SSC();
    newdfa.toDot();
    cout<<"hello "<<endl;
}