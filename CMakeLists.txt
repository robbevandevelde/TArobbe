cmake_minimum_required(VERSION 3.8)
project(SSC)

set(CMAKE_CXX_STANDARD 11)

include_directories(json external)

set(SOURCE_FILES main.cpp NFA.cpp NFA.h State.cpp State.h json/json-forwards.h json/json.h jsoncpp.cpp NFA_Transition.cpp NFA_Transition.h NFA.json DFA.cpp DFA.h DFA_Transition.cpp DFA_Transition.h dfa.dt Test1.json)
add_executable(SSC ${SOURCE_FILES})