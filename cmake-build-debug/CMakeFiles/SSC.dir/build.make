# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/robbe/Desktop/SSC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/robbe/Desktop/SSC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SSC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SSC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SSC.dir/flags.make

CMakeFiles/SSC.dir/main.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SSC.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/main.cpp.o -c /Users/robbe/Desktop/SSC/main.cpp

CMakeFiles/SSC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/main.cpp > CMakeFiles/SSC.dir/main.cpp.i

CMakeFiles/SSC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/main.cpp -o CMakeFiles/SSC.dir/main.cpp.s

CMakeFiles/SSC.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/main.cpp.o.requires

CMakeFiles/SSC.dir/main.cpp.o.provides: CMakeFiles/SSC.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/main.cpp.o.provides

CMakeFiles/SSC.dir/main.cpp.o.provides.build: CMakeFiles/SSC.dir/main.cpp.o


CMakeFiles/SSC.dir/NFA.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/NFA.cpp.o: ../NFA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SSC.dir/NFA.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/NFA.cpp.o -c /Users/robbe/Desktop/SSC/NFA.cpp

CMakeFiles/SSC.dir/NFA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/NFA.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/NFA.cpp > CMakeFiles/SSC.dir/NFA.cpp.i

CMakeFiles/SSC.dir/NFA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/NFA.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/NFA.cpp -o CMakeFiles/SSC.dir/NFA.cpp.s

CMakeFiles/SSC.dir/NFA.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/NFA.cpp.o.requires

CMakeFiles/SSC.dir/NFA.cpp.o.provides: CMakeFiles/SSC.dir/NFA.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/NFA.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/NFA.cpp.o.provides

CMakeFiles/SSC.dir/NFA.cpp.o.provides.build: CMakeFiles/SSC.dir/NFA.cpp.o


CMakeFiles/SSC.dir/State.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SSC.dir/State.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/State.cpp.o -c /Users/robbe/Desktop/SSC/State.cpp

CMakeFiles/SSC.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/State.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/State.cpp > CMakeFiles/SSC.dir/State.cpp.i

CMakeFiles/SSC.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/State.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/State.cpp -o CMakeFiles/SSC.dir/State.cpp.s

CMakeFiles/SSC.dir/State.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/State.cpp.o.requires

CMakeFiles/SSC.dir/State.cpp.o.provides: CMakeFiles/SSC.dir/State.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/State.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/State.cpp.o.provides

CMakeFiles/SSC.dir/State.cpp.o.provides.build: CMakeFiles/SSC.dir/State.cpp.o


CMakeFiles/SSC.dir/jsoncpp.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/jsoncpp.cpp.o: ../jsoncpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SSC.dir/jsoncpp.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/jsoncpp.cpp.o -c /Users/robbe/Desktop/SSC/jsoncpp.cpp

CMakeFiles/SSC.dir/jsoncpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/jsoncpp.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/jsoncpp.cpp > CMakeFiles/SSC.dir/jsoncpp.cpp.i

CMakeFiles/SSC.dir/jsoncpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/jsoncpp.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/jsoncpp.cpp -o CMakeFiles/SSC.dir/jsoncpp.cpp.s

CMakeFiles/SSC.dir/jsoncpp.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/jsoncpp.cpp.o.requires

CMakeFiles/SSC.dir/jsoncpp.cpp.o.provides: CMakeFiles/SSC.dir/jsoncpp.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/jsoncpp.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/jsoncpp.cpp.o.provides

CMakeFiles/SSC.dir/jsoncpp.cpp.o.provides.build: CMakeFiles/SSC.dir/jsoncpp.cpp.o


CMakeFiles/SSC.dir/NFA_Transition.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/NFA_Transition.cpp.o: ../NFA_Transition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SSC.dir/NFA_Transition.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/NFA_Transition.cpp.o -c /Users/robbe/Desktop/SSC/NFA_Transition.cpp

CMakeFiles/SSC.dir/NFA_Transition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/NFA_Transition.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/NFA_Transition.cpp > CMakeFiles/SSC.dir/NFA_Transition.cpp.i

CMakeFiles/SSC.dir/NFA_Transition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/NFA_Transition.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/NFA_Transition.cpp -o CMakeFiles/SSC.dir/NFA_Transition.cpp.s

CMakeFiles/SSC.dir/NFA_Transition.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/NFA_Transition.cpp.o.requires

CMakeFiles/SSC.dir/NFA_Transition.cpp.o.provides: CMakeFiles/SSC.dir/NFA_Transition.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/NFA_Transition.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/NFA_Transition.cpp.o.provides

CMakeFiles/SSC.dir/NFA_Transition.cpp.o.provides.build: CMakeFiles/SSC.dir/NFA_Transition.cpp.o


CMakeFiles/SSC.dir/DFA.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/DFA.cpp.o: ../DFA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SSC.dir/DFA.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/DFA.cpp.o -c /Users/robbe/Desktop/SSC/DFA.cpp

CMakeFiles/SSC.dir/DFA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/DFA.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/DFA.cpp > CMakeFiles/SSC.dir/DFA.cpp.i

CMakeFiles/SSC.dir/DFA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/DFA.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/DFA.cpp -o CMakeFiles/SSC.dir/DFA.cpp.s

CMakeFiles/SSC.dir/DFA.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/DFA.cpp.o.requires

CMakeFiles/SSC.dir/DFA.cpp.o.provides: CMakeFiles/SSC.dir/DFA.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/DFA.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/DFA.cpp.o.provides

CMakeFiles/SSC.dir/DFA.cpp.o.provides.build: CMakeFiles/SSC.dir/DFA.cpp.o


CMakeFiles/SSC.dir/DFA_Transition.cpp.o: CMakeFiles/SSC.dir/flags.make
CMakeFiles/SSC.dir/DFA_Transition.cpp.o: ../DFA_Transition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SSC.dir/DFA_Transition.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SSC.dir/DFA_Transition.cpp.o -c /Users/robbe/Desktop/SSC/DFA_Transition.cpp

CMakeFiles/SSC.dir/DFA_Transition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SSC.dir/DFA_Transition.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robbe/Desktop/SSC/DFA_Transition.cpp > CMakeFiles/SSC.dir/DFA_Transition.cpp.i

CMakeFiles/SSC.dir/DFA_Transition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SSC.dir/DFA_Transition.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robbe/Desktop/SSC/DFA_Transition.cpp -o CMakeFiles/SSC.dir/DFA_Transition.cpp.s

CMakeFiles/SSC.dir/DFA_Transition.cpp.o.requires:

.PHONY : CMakeFiles/SSC.dir/DFA_Transition.cpp.o.requires

CMakeFiles/SSC.dir/DFA_Transition.cpp.o.provides: CMakeFiles/SSC.dir/DFA_Transition.cpp.o.requires
	$(MAKE) -f CMakeFiles/SSC.dir/build.make CMakeFiles/SSC.dir/DFA_Transition.cpp.o.provides.build
.PHONY : CMakeFiles/SSC.dir/DFA_Transition.cpp.o.provides

CMakeFiles/SSC.dir/DFA_Transition.cpp.o.provides.build: CMakeFiles/SSC.dir/DFA_Transition.cpp.o


# Object files for target SSC
SSC_OBJECTS = \
"CMakeFiles/SSC.dir/main.cpp.o" \
"CMakeFiles/SSC.dir/NFA.cpp.o" \
"CMakeFiles/SSC.dir/State.cpp.o" \
"CMakeFiles/SSC.dir/jsoncpp.cpp.o" \
"CMakeFiles/SSC.dir/NFA_Transition.cpp.o" \
"CMakeFiles/SSC.dir/DFA.cpp.o" \
"CMakeFiles/SSC.dir/DFA_Transition.cpp.o"

# External object files for target SSC
SSC_EXTERNAL_OBJECTS =

SSC: CMakeFiles/SSC.dir/main.cpp.o
SSC: CMakeFiles/SSC.dir/NFA.cpp.o
SSC: CMakeFiles/SSC.dir/State.cpp.o
SSC: CMakeFiles/SSC.dir/jsoncpp.cpp.o
SSC: CMakeFiles/SSC.dir/NFA_Transition.cpp.o
SSC: CMakeFiles/SSC.dir/DFA.cpp.o
SSC: CMakeFiles/SSC.dir/DFA_Transition.cpp.o
SSC: CMakeFiles/SSC.dir/build.make
SSC: CMakeFiles/SSC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable SSC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SSC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SSC.dir/build: SSC

.PHONY : CMakeFiles/SSC.dir/build

CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/main.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/NFA.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/State.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/jsoncpp.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/NFA_Transition.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/DFA.cpp.o.requires
CMakeFiles/SSC.dir/requires: CMakeFiles/SSC.dir/DFA_Transition.cpp.o.requires

.PHONY : CMakeFiles/SSC.dir/requires

CMakeFiles/SSC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SSC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SSC.dir/clean

CMakeFiles/SSC.dir/depend:
	cd /Users/robbe/Desktop/SSC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/robbe/Desktop/SSC /Users/robbe/Desktop/SSC /Users/robbe/Desktop/SSC/cmake-build-debug /Users/robbe/Desktop/SSC/cmake-build-debug /Users/robbe/Desktop/SSC/cmake-build-debug/CMakeFiles/SSC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SSC.dir/depend

