# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/linjun/CLionProjects/microgin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/linjun/CLionProjects/microgin/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/microgin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/microgin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/microgin.dir/flags.make

CMakeFiles/microgin.dir/main.cpp.o: CMakeFiles/microgin.dir/flags.make
CMakeFiles/microgin.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/linjun/CLionProjects/microgin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/microgin.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/microgin.dir/main.cpp.o -c /Users/linjun/CLionProjects/microgin/main.cpp

CMakeFiles/microgin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/microgin.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/linjun/CLionProjects/microgin/main.cpp > CMakeFiles/microgin.dir/main.cpp.i

CMakeFiles/microgin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/microgin.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/linjun/CLionProjects/microgin/main.cpp -o CMakeFiles/microgin.dir/main.cpp.s

# Object files for target microgin
microgin_OBJECTS = \
"CMakeFiles/microgin.dir/main.cpp.o"

# External object files for target microgin
microgin_EXTERNAL_OBJECTS =

microgin: CMakeFiles/microgin.dir/main.cpp.o
microgin: CMakeFiles/microgin.dir/build.make
microgin: CMakeFiles/microgin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/linjun/CLionProjects/microgin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable microgin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/microgin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/microgin.dir/build: microgin

.PHONY : CMakeFiles/microgin.dir/build

CMakeFiles/microgin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/microgin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/microgin.dir/clean

CMakeFiles/microgin.dir/depend:
	cd /Users/linjun/CLionProjects/microgin/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/linjun/CLionProjects/microgin /Users/linjun/CLionProjects/microgin /Users/linjun/CLionProjects/microgin/cmake-build-debug /Users/linjun/CLionProjects/microgin/cmake-build-debug /Users/linjun/CLionProjects/microgin/cmake-build-debug/CMakeFiles/microgin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/microgin.dir/depend
