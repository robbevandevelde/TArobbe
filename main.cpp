#include <iostream>
#include "NFA.h"
int main() {
    NFA file = NFA("NFA.json");
    DFA newdfa = file.SSC();
    cout<<"hello "<<endl;
}