# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /cygdrive/c/Users/lefts/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/lefts/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/Computer Science/Code/C++/Short String"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/shortString_esame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shortString_esame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shortString_esame.dir/flags.make

CMakeFiles/shortString_esame.dir/main.cpp.o: CMakeFiles/shortString_esame.dir/flags.make
CMakeFiles/shortString_esame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shortString_esame.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shortString_esame.dir/main.cpp.o -c "/cygdrive/d/Computer Science/Code/C++/Short String/main.cpp"

CMakeFiles/shortString_esame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shortString_esame.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Computer Science/Code/C++/Short String/main.cpp" > CMakeFiles/shortString_esame.dir/main.cpp.i

CMakeFiles/shortString_esame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shortString_esame.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Computer Science/Code/C++/Short String/main.cpp" -o CMakeFiles/shortString_esame.dir/main.cpp.s

CMakeFiles/shortString_esame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/shortString_esame.dir/main.cpp.o.requires

CMakeFiles/shortString_esame.dir/main.cpp.o.provides: CMakeFiles/shortString_esame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/shortString_esame.dir/build.make CMakeFiles/shortString_esame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/shortString_esame.dir/main.cpp.o.provides

CMakeFiles/shortString_esame.dir/main.cpp.o.provides.build: CMakeFiles/shortString_esame.dir/main.cpp.o


CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o: CMakeFiles/shortString_esame.dir/flags.make
CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o: ../shortStr_source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o -c "/cygdrive/d/Computer Science/Code/C++/Short String/shortStr_source.cpp"

CMakeFiles/shortString_esame.dir/shortStr_source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shortString_esame.dir/shortStr_source.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Computer Science/Code/C++/Short String/shortStr_source.cpp" > CMakeFiles/shortString_esame.dir/shortStr_source.cpp.i

CMakeFiles/shortString_esame.dir/shortStr_source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shortString_esame.dir/shortStr_source.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Computer Science/Code/C++/Short String/shortStr_source.cpp" -o CMakeFiles/shortString_esame.dir/shortStr_source.cpp.s

CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.requires:

.PHONY : CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.requires

CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.provides: CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.requires
	$(MAKE) -f CMakeFiles/shortString_esame.dir/build.make CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.provides.build
.PHONY : CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.provides

CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.provides.build: CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o


# Object files for target shortString_esame
shortString_esame_OBJECTS = \
"CMakeFiles/shortString_esame.dir/main.cpp.o" \
"CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o"

# External object files for target shortString_esame
shortString_esame_EXTERNAL_OBJECTS =

shortString_esame.exe: CMakeFiles/shortString_esame.dir/main.cpp.o
shortString_esame.exe: CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o
shortString_esame.exe: CMakeFiles/shortString_esame.dir/build.make
shortString_esame.exe: CMakeFiles/shortString_esame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable shortString_esame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shortString_esame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shortString_esame.dir/build: shortString_esame.exe

.PHONY : CMakeFiles/shortString_esame.dir/build

CMakeFiles/shortString_esame.dir/requires: CMakeFiles/shortString_esame.dir/main.cpp.o.requires
CMakeFiles/shortString_esame.dir/requires: CMakeFiles/shortString_esame.dir/shortStr_source.cpp.o.requires

.PHONY : CMakeFiles/shortString_esame.dir/requires

CMakeFiles/shortString_esame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shortString_esame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shortString_esame.dir/clean

CMakeFiles/shortString_esame.dir/depend:
	cd "/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Computer Science/Code/C++/Short String" "/cygdrive/d/Computer Science/Code/C++/Short String" "/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug" "/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug" "/cygdrive/d/Computer Science/Code/C++/Short String/cmake-build-debug/CMakeFiles/shortString_esame.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/shortString_esame.dir/depend

