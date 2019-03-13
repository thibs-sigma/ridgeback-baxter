# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/thib/ridgeback-cartographer_ws/src/ceres-solver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thib/ridgeback-cartographer_ws/build/ceres-solver

# Include any dependencies generated for this target.
include examples/CMakeFiles/ellipse_approximation.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ellipse_approximation.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ellipse_approximation.dir/flags.make

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o: examples/CMakeFiles/ellipse_approximation.dir/flags.make
examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o: /home/thib/ridgeback-cartographer_ws/src/ceres-solver/examples/ellipse_approximation.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thib/ridgeback-cartographer_ws/build/ceres-solver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o"
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o -c /home/thib/ridgeback-cartographer_ws/src/ceres-solver/examples/ellipse_approximation.cc

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.i"
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thib/ridgeback-cartographer_ws/src/ceres-solver/examples/ellipse_approximation.cc > CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.i

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.s"
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thib/ridgeback-cartographer_ws/src/ceres-solver/examples/ellipse_approximation.cc -o CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.s

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.requires:

.PHONY : examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.requires

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.provides: examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.requires
	$(MAKE) -f examples/CMakeFiles/ellipse_approximation.dir/build.make examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.provides.build
.PHONY : examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.provides

examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.provides.build: examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o


# Object files for target ellipse_approximation
ellipse_approximation_OBJECTS = \
"CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o"

# External object files for target ellipse_approximation
ellipse_approximation_EXTERNAL_OBJECTS =

bin/ellipse_approximation: examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o
bin/ellipse_approximation: examples/CMakeFiles/ellipse_approximation.dir/build.make
bin/ellipse_approximation: lib/libceres.a
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libglog.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libgflags.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libspqr.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libtbb.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcholmod.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libccolamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcolamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libamd.so
bin/ellipse_approximation: /usr/lib/liblapack.so
bin/ellipse_approximation: /usr/lib/libf77blas.so
bin/ellipse_approximation: /usr/lib/libatlas.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/librt.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcxsparse.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libspqr.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libtbb.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcholmod.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libccolamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcolamd.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libamd.so
bin/ellipse_approximation: /usr/lib/liblapack.so
bin/ellipse_approximation: /usr/lib/libf77blas.so
bin/ellipse_approximation: /usr/lib/libatlas.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/librt.so
bin/ellipse_approximation: /usr/lib/x86_64-linux-gnu/libcxsparse.so
bin/ellipse_approximation: examples/CMakeFiles/ellipse_approximation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thib/ridgeback-cartographer_ws/build/ceres-solver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/ellipse_approximation"
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ellipse_approximation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ellipse_approximation.dir/build: bin/ellipse_approximation

.PHONY : examples/CMakeFiles/ellipse_approximation.dir/build

examples/CMakeFiles/ellipse_approximation.dir/requires: examples/CMakeFiles/ellipse_approximation.dir/ellipse_approximation.cc.o.requires

.PHONY : examples/CMakeFiles/ellipse_approximation.dir/requires

examples/CMakeFiles/ellipse_approximation.dir/clean:
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples && $(CMAKE_COMMAND) -P CMakeFiles/ellipse_approximation.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ellipse_approximation.dir/clean

examples/CMakeFiles/ellipse_approximation.dir/depend:
	cd /home/thib/ridgeback-cartographer_ws/build/ceres-solver && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thib/ridgeback-cartographer_ws/src/ceres-solver /home/thib/ridgeback-cartographer_ws/src/ceres-solver/examples /home/thib/ridgeback-cartographer_ws/build/ceres-solver /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples /home/thib/ridgeback-cartographer_ws/build/ceres-solver/examples/CMakeFiles/ellipse_approximation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ellipse_approximation.dir/depend

