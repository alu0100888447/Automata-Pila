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
CMAKE_COMMAND = /opt/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/izm20/Workspace/CC/Practica1/AP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AP.dir/flags.make

CMakeFiles/AP.dir/src/main.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AP.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/main.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/main.cpp

CMakeFiles/AP.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/main.cpp > CMakeFiles/AP.dir/src/main.cpp.i

CMakeFiles/AP.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/main.cpp -o CMakeFiles/AP.dir/src/main.cpp.s

CMakeFiles/AP.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/main.cpp.o.requires

CMakeFiles/AP.dir/src/main.cpp.o.provides: CMakeFiles/AP.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/main.cpp.o.provides

CMakeFiles/AP.dir/src/main.cpp.o.provides.build: CMakeFiles/AP.dir/src/main.cpp.o


CMakeFiles/AP.dir/src/AP.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/AP.cpp.o: ../src/AP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AP.dir/src/AP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/AP.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/AP.cpp

CMakeFiles/AP.dir/src/AP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/AP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/AP.cpp > CMakeFiles/AP.dir/src/AP.cpp.i

CMakeFiles/AP.dir/src/AP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/AP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/AP.cpp -o CMakeFiles/AP.dir/src/AP.cpp.s

CMakeFiles/AP.dir/src/AP.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/AP.cpp.o.requires

CMakeFiles/AP.dir/src/AP.cpp.o.provides: CMakeFiles/AP.dir/src/AP.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/AP.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/AP.cpp.o.provides

CMakeFiles/AP.dir/src/AP.cpp.o.provides.build: CMakeFiles/AP.dir/src/AP.cpp.o


CMakeFiles/AP.dir/src/SetEstados.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/SetEstados.cpp.o: ../src/SetEstados.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AP.dir/src/SetEstados.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/SetEstados.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/SetEstados.cpp

CMakeFiles/AP.dir/src/SetEstados.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/SetEstados.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/SetEstados.cpp > CMakeFiles/AP.dir/src/SetEstados.cpp.i

CMakeFiles/AP.dir/src/SetEstados.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/SetEstados.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/SetEstados.cpp -o CMakeFiles/AP.dir/src/SetEstados.cpp.s

CMakeFiles/AP.dir/src/SetEstados.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/SetEstados.cpp.o.requires

CMakeFiles/AP.dir/src/SetEstados.cpp.o.provides: CMakeFiles/AP.dir/src/SetEstados.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/SetEstados.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/SetEstados.cpp.o.provides

CMakeFiles/AP.dir/src/SetEstados.cpp.o.provides.build: CMakeFiles/AP.dir/src/SetEstados.cpp.o


CMakeFiles/AP.dir/src/Estado.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/Estado.cpp.o: ../src/Estado.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AP.dir/src/Estado.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/Estado.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/Estado.cpp

CMakeFiles/AP.dir/src/Estado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/Estado.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/Estado.cpp > CMakeFiles/AP.dir/src/Estado.cpp.i

CMakeFiles/AP.dir/src/Estado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/Estado.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/Estado.cpp -o CMakeFiles/AP.dir/src/Estado.cpp.s

CMakeFiles/AP.dir/src/Estado.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/Estado.cpp.o.requires

CMakeFiles/AP.dir/src/Estado.cpp.o.provides: CMakeFiles/AP.dir/src/Estado.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/Estado.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/Estado.cpp.o.provides

CMakeFiles/AP.dir/src/Estado.cpp.o.provides.build: CMakeFiles/AP.dir/src/Estado.cpp.o


CMakeFiles/AP.dir/src/SetTransiciones.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/SetTransiciones.cpp.o: ../src/SetTransiciones.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AP.dir/src/SetTransiciones.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/SetTransiciones.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/SetTransiciones.cpp

CMakeFiles/AP.dir/src/SetTransiciones.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/SetTransiciones.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/SetTransiciones.cpp > CMakeFiles/AP.dir/src/SetTransiciones.cpp.i

CMakeFiles/AP.dir/src/SetTransiciones.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/SetTransiciones.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/SetTransiciones.cpp -o CMakeFiles/AP.dir/src/SetTransiciones.cpp.s

CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.requires

CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.provides: CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.provides

CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.provides.build: CMakeFiles/AP.dir/src/SetTransiciones.cpp.o


CMakeFiles/AP.dir/src/Transicion.cpp.o: CMakeFiles/AP.dir/flags.make
CMakeFiles/AP.dir/src/Transicion.cpp.o: ../src/Transicion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AP.dir/src/Transicion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AP.dir/src/Transicion.cpp.o -c /home/izm20/Workspace/CC/Practica1/AP/src/Transicion.cpp

CMakeFiles/AP.dir/src/Transicion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AP.dir/src/Transicion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica1/AP/src/Transicion.cpp > CMakeFiles/AP.dir/src/Transicion.cpp.i

CMakeFiles/AP.dir/src/Transicion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AP.dir/src/Transicion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica1/AP/src/Transicion.cpp -o CMakeFiles/AP.dir/src/Transicion.cpp.s

CMakeFiles/AP.dir/src/Transicion.cpp.o.requires:

.PHONY : CMakeFiles/AP.dir/src/Transicion.cpp.o.requires

CMakeFiles/AP.dir/src/Transicion.cpp.o.provides: CMakeFiles/AP.dir/src/Transicion.cpp.o.requires
	$(MAKE) -f CMakeFiles/AP.dir/build.make CMakeFiles/AP.dir/src/Transicion.cpp.o.provides.build
.PHONY : CMakeFiles/AP.dir/src/Transicion.cpp.o.provides

CMakeFiles/AP.dir/src/Transicion.cpp.o.provides.build: CMakeFiles/AP.dir/src/Transicion.cpp.o


# Object files for target AP
AP_OBJECTS = \
"CMakeFiles/AP.dir/src/main.cpp.o" \
"CMakeFiles/AP.dir/src/AP.cpp.o" \
"CMakeFiles/AP.dir/src/SetEstados.cpp.o" \
"CMakeFiles/AP.dir/src/Estado.cpp.o" \
"CMakeFiles/AP.dir/src/SetTransiciones.cpp.o" \
"CMakeFiles/AP.dir/src/Transicion.cpp.o"

# External object files for target AP
AP_EXTERNAL_OBJECTS =

AP: CMakeFiles/AP.dir/src/main.cpp.o
AP: CMakeFiles/AP.dir/src/AP.cpp.o
AP: CMakeFiles/AP.dir/src/SetEstados.cpp.o
AP: CMakeFiles/AP.dir/src/Estado.cpp.o
AP: CMakeFiles/AP.dir/src/SetTransiciones.cpp.o
AP: CMakeFiles/AP.dir/src/Transicion.cpp.o
AP: CMakeFiles/AP.dir/build.make
AP: CMakeFiles/AP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable AP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AP.dir/build: AP

.PHONY : CMakeFiles/AP.dir/build

CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/main.cpp.o.requires
CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/AP.cpp.o.requires
CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/SetEstados.cpp.o.requires
CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/Estado.cpp.o.requires
CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/SetTransiciones.cpp.o.requires
CMakeFiles/AP.dir/requires: CMakeFiles/AP.dir/src/Transicion.cpp.o.requires

.PHONY : CMakeFiles/AP.dir/requires

CMakeFiles/AP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AP.dir/clean

CMakeFiles/AP.dir/depend:
	cd /home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/izm20/Workspace/CC/Practica1/AP /home/izm20/Workspace/CC/Practica1/AP /home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug /home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug /home/izm20/Workspace/CC/Practica1/AP/cmake-build-debug/CMakeFiles/AP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AP.dir/depend

