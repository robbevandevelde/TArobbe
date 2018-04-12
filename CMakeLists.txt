cmake_minimum_required(VERSION 3.8)
project(SSC)

set(CMAKE_CXX_STANDARD 11)

include_directories(json external)

set(SOURCE_FILES main.cpp NFA.cpp NFA.h State.cpp State.h jsoncpp.cpp json json/json.h json/json-forwards.h NFA_Transition.cpp NFA_Transition.h NFA.json DFA.cpp DFA.h DFA_Transition.cpp DFA_Transition.h)
add_executable(SSC ${SOURCE_FILES})