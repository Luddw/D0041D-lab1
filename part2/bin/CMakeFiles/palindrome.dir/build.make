# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin

# Include any dependencies generated for this target.
include CMakeFiles/palindrome.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/palindrome.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/palindrome.dir/flags.make

CMakeFiles/palindrome.dir/main.cc.o: CMakeFiles/palindrome.dir/flags.make
CMakeFiles/palindrome.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/palindrome.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/palindrome.dir/main.cc.o -c /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/main.cc

CMakeFiles/palindrome.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/palindrome.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/main.cc > CMakeFiles/palindrome.dir/main.cc.i

CMakeFiles/palindrome.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/palindrome.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/main.cc -o CMakeFiles/palindrome.dir/main.cc.s

# Object files for target palindrome
palindrome_OBJECTS = \
"CMakeFiles/palindrome.dir/main.cc.o"

# External object files for target palindrome
palindrome_EXTERNAL_OBJECTS =

palindrome: CMakeFiles/palindrome.dir/main.cc.o
palindrome: CMakeFiles/palindrome.dir/build.make
palindrome: CMakeFiles/palindrome.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable palindrome"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palindrome.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/palindrome.dir/build: palindrome

.PHONY : CMakeFiles/palindrome.dir/build

CMakeFiles/palindrome.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/palindrome.dir/cmake_clean.cmake
.PHONY : CMakeFiles/palindrome.dir/clean

CMakeFiles/palindrome.dir/depend:
	cd /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2 /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2 /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin /home/ludlin-8/Documents/gitrepos/DOA/D0041D-lab1/part2/bin/CMakeFiles/palindrome.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/palindrome.dir/depend
