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
CMAKE_SOURCE_DIR = /home/usuario/practicas/CyA/p01_strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/CyA/p01_strings/build

# Include any dependencies generated for this target.
include CMakeFiles/p01_strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p01_strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p01_strings.dir/flags.make

CMakeFiles/p01_strings.dir/src/p01_strings.cc.o: CMakeFiles/p01_strings.dir/flags.make
CMakeFiles/p01_strings.dir/src/p01_strings.cc.o: ../src/p01_strings.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p01_strings.dir/src/p01_strings.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p01_strings.dir/src/p01_strings.cc.o -c /home/usuario/practicas/CyA/p01_strings/src/p01_strings.cc

CMakeFiles/p01_strings.dir/src/p01_strings.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p01_strings.dir/src/p01_strings.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p01_strings/src/p01_strings.cc > CMakeFiles/p01_strings.dir/src/p01_strings.cc.i

CMakeFiles/p01_strings.dir/src/p01_strings.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p01_strings.dir/src/p01_strings.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p01_strings/src/p01_strings.cc -o CMakeFiles/p01_strings.dir/src/p01_strings.cc.s

CMakeFiles/p01_strings.dir/src/chain.cc.o: CMakeFiles/p01_strings.dir/flags.make
CMakeFiles/p01_strings.dir/src/chain.cc.o: ../src/chain.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/p01_strings.dir/src/chain.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p01_strings.dir/src/chain.cc.o -c /home/usuario/practicas/CyA/p01_strings/src/chain.cc

CMakeFiles/p01_strings.dir/src/chain.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p01_strings.dir/src/chain.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p01_strings/src/chain.cc > CMakeFiles/p01_strings.dir/src/chain.cc.i

CMakeFiles/p01_strings.dir/src/chain.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p01_strings.dir/src/chain.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p01_strings/src/chain.cc -o CMakeFiles/p01_strings.dir/src/chain.cc.s

CMakeFiles/p01_strings.dir/src/alphabet.cc.o: CMakeFiles/p01_strings.dir/flags.make
CMakeFiles/p01_strings.dir/src/alphabet.cc.o: ../src/alphabet.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/p01_strings.dir/src/alphabet.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p01_strings.dir/src/alphabet.cc.o -c /home/usuario/practicas/CyA/p01_strings/src/alphabet.cc

CMakeFiles/p01_strings.dir/src/alphabet.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p01_strings.dir/src/alphabet.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p01_strings/src/alphabet.cc > CMakeFiles/p01_strings.dir/src/alphabet.cc.i

CMakeFiles/p01_strings.dir/src/alphabet.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p01_strings.dir/src/alphabet.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p01_strings/src/alphabet.cc -o CMakeFiles/p01_strings.dir/src/alphabet.cc.s

CMakeFiles/p01_strings.dir/src/symbol.cc.o: CMakeFiles/p01_strings.dir/flags.make
CMakeFiles/p01_strings.dir/src/symbol.cc.o: ../src/symbol.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/p01_strings.dir/src/symbol.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p01_strings.dir/src/symbol.cc.o -c /home/usuario/practicas/CyA/p01_strings/src/symbol.cc

CMakeFiles/p01_strings.dir/src/symbol.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p01_strings.dir/src/symbol.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p01_strings/src/symbol.cc > CMakeFiles/p01_strings.dir/src/symbol.cc.i

CMakeFiles/p01_strings.dir/src/symbol.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p01_strings.dir/src/symbol.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p01_strings/src/symbol.cc -o CMakeFiles/p01_strings.dir/src/symbol.cc.s

CMakeFiles/p01_strings.dir/src/usage.cc.o: CMakeFiles/p01_strings.dir/flags.make
CMakeFiles/p01_strings.dir/src/usage.cc.o: ../src/usage.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/p01_strings.dir/src/usage.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p01_strings.dir/src/usage.cc.o -c /home/usuario/practicas/CyA/p01_strings/src/usage.cc

CMakeFiles/p01_strings.dir/src/usage.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p01_strings.dir/src/usage.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/CyA/p01_strings/src/usage.cc > CMakeFiles/p01_strings.dir/src/usage.cc.i

CMakeFiles/p01_strings.dir/src/usage.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p01_strings.dir/src/usage.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/CyA/p01_strings/src/usage.cc -o CMakeFiles/p01_strings.dir/src/usage.cc.s

# Object files for target p01_strings
p01_strings_OBJECTS = \
"CMakeFiles/p01_strings.dir/src/p01_strings.cc.o" \
"CMakeFiles/p01_strings.dir/src/chain.cc.o" \
"CMakeFiles/p01_strings.dir/src/alphabet.cc.o" \
"CMakeFiles/p01_strings.dir/src/symbol.cc.o" \
"CMakeFiles/p01_strings.dir/src/usage.cc.o"

# External object files for target p01_strings
p01_strings_EXTERNAL_OBJECTS =

p01_strings: CMakeFiles/p01_strings.dir/src/p01_strings.cc.o
p01_strings: CMakeFiles/p01_strings.dir/src/chain.cc.o
p01_strings: CMakeFiles/p01_strings.dir/src/alphabet.cc.o
p01_strings: CMakeFiles/p01_strings.dir/src/symbol.cc.o
p01_strings: CMakeFiles/p01_strings.dir/src/usage.cc.o
p01_strings: CMakeFiles/p01_strings.dir/build.make
p01_strings: CMakeFiles/p01_strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practicas/CyA/p01_strings/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable p01_strings"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p01_strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p01_strings.dir/build: p01_strings

.PHONY : CMakeFiles/p01_strings.dir/build

CMakeFiles/p01_strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/p01_strings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/p01_strings.dir/clean

CMakeFiles/p01_strings.dir/depend:
	cd /home/usuario/practicas/CyA/p01_strings/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/CyA/p01_strings /home/usuario/practicas/CyA/p01_strings /home/usuario/practicas/CyA/p01_strings/build /home/usuario/practicas/CyA/p01_strings/build /home/usuario/practicas/CyA/p01_strings/build/CMakeFiles/p01_strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p01_strings.dir/depend

