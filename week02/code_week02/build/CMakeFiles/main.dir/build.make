# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hitcrt/Documents/week2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hitcrt/Documents/week2/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: /home/hitcrt/Documents/week2/main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /home/hitcrt/Documents/week2/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hitcrt/Documents/week2/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hitcrt/Documents/week2/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/src/complex.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/complex.cpp.o: /home/hitcrt/Documents/week2/src/complex.cpp
CMakeFiles/main.dir/src/complex.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/complex.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/complex.cpp.o -MF CMakeFiles/main.dir/src/complex.cpp.o.d -o CMakeFiles/main.dir/src/complex.cpp.o -c /home/hitcrt/Documents/week2/src/complex.cpp

CMakeFiles/main.dir/src/complex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/complex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hitcrt/Documents/week2/src/complex.cpp > CMakeFiles/main.dir/src/complex.cpp.i

CMakeFiles/main.dir/src/complex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/complex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hitcrt/Documents/week2/src/complex.cpp -o CMakeFiles/main.dir/src/complex.cpp.s

CMakeFiles/main.dir/src/findnumber.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/findnumber.cpp.o: /home/hitcrt/Documents/week2/src/findnumber.cpp
CMakeFiles/main.dir/src/findnumber.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/findnumber.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/findnumber.cpp.o -MF CMakeFiles/main.dir/src/findnumber.cpp.o.d -o CMakeFiles/main.dir/src/findnumber.cpp.o -c /home/hitcrt/Documents/week2/src/findnumber.cpp

CMakeFiles/main.dir/src/findnumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/findnumber.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hitcrt/Documents/week2/src/findnumber.cpp > CMakeFiles/main.dir/src/findnumber.cpp.i

CMakeFiles/main.dir/src/findnumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/findnumber.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hitcrt/Documents/week2/src/findnumber.cpp -o CMakeFiles/main.dir/src/findnumber.cpp.s

CMakeFiles/main.dir/src/sortnumber.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/sortnumber.cpp.o: /home/hitcrt/Documents/week2/src/sortnumber.cpp
CMakeFiles/main.dir/src/sortnumber.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/sortnumber.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/sortnumber.cpp.o -MF CMakeFiles/main.dir/src/sortnumber.cpp.o.d -o CMakeFiles/main.dir/src/sortnumber.cpp.o -c /home/hitcrt/Documents/week2/src/sortnumber.cpp

CMakeFiles/main.dir/src/sortnumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/sortnumber.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hitcrt/Documents/week2/src/sortnumber.cpp > CMakeFiles/main.dir/src/sortnumber.cpp.i

CMakeFiles/main.dir/src/sortnumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/sortnumber.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hitcrt/Documents/week2/src/sortnumber.cpp -o CMakeFiles/main.dir/src/sortnumber.cpp.s

CMakeFiles/main.dir/src/sortstdent.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/sortstdent.cpp.o: /home/hitcrt/Documents/week2/src/sortstdent.cpp
CMakeFiles/main.dir/src/sortstdent.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/sortstdent.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/sortstdent.cpp.o -MF CMakeFiles/main.dir/src/sortstdent.cpp.o.d -o CMakeFiles/main.dir/src/sortstdent.cpp.o -c /home/hitcrt/Documents/week2/src/sortstdent.cpp

CMakeFiles/main.dir/src/sortstdent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/sortstdent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hitcrt/Documents/week2/src/sortstdent.cpp > CMakeFiles/main.dir/src/sortstdent.cpp.i

CMakeFiles/main.dir/src/sortstdent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/sortstdent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hitcrt/Documents/week2/src/sortstdent.cpp -o CMakeFiles/main.dir/src/sortstdent.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/src/complex.cpp.o" \
"CMakeFiles/main.dir/src/findnumber.cpp.o" \
"CMakeFiles/main.dir/src/sortnumber.cpp.o" \
"CMakeFiles/main.dir/src/sortstdent.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/main.cpp.o
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/src/complex.cpp.o
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/src/findnumber.cpp.o
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/src/sortnumber.cpp.o
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/src/sortstdent.cpp.o
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/build.make
/home/hitcrt/Documents/week2/bin/main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hitcrt/Documents/week2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable /home/hitcrt/Documents/week2/bin/main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: /home/hitcrt/Documents/week2/bin/main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/hitcrt/Documents/week2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hitcrt/Documents/week2 /home/hitcrt/Documents/week2 /home/hitcrt/Documents/week2/build /home/hitcrt/Documents/week2/build /home/hitcrt/Documents/week2/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

