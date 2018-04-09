cmake_minimum_required(VERSION 3.8)
project(SSC)

set(CMAKE_CXX_STANDARD 11)

include_directories(json external)

set(SOURCE_FILES main.cpp NFA.cpp NFA.h State.cpp State.h jsoncpp.cpp json json/json.h json/json-forwards.h Transition.cpp Transition.h NFA.json)
add_executable(SSC ${SOURCE_FILES})