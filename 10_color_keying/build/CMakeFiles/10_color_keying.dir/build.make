# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/bruce/SDL2/10_color_keying

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bruce/SDL2/10_color_keying/build

# Include any dependencies generated for this target.
include CMakeFiles/10_color_keying.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10_color_keying.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10_color_keying.dir/flags.make

src/test.c: vala.stamp

vala.stamp: ../src/test.vala
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/10_color_keying/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating src/test.c"
	/usr/bin/valac -C -b /home/bruce/SDL2/10_color_keying -d /home/bruce/SDL2/10_color_keying/build --pkg=SDL2_gfx --pkg=SDL2_image --pkg=SDL2_ttf --pkg=glib-2.0 --pkg=gobject-2.0 --pkg=sdl2 --thread --target-glib 2.42.2 /home/bruce/SDL2/10_color_keying/src/test.vala
	/usr/bin/cmake -E touch vala.stamp

CMakeFiles/10_color_keying.dir/src/test.c.o: CMakeFiles/10_color_keying.dir/flags.make
CMakeFiles/10_color_keying.dir/src/test.c.o: src/test.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/10_color_keying/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/10_color_keying.dir/src/test.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/10_color_keying.dir/src/test.c.o   -c /home/bruce/SDL2/10_color_keying/build/src/test.c

CMakeFiles/10_color_keying.dir/src/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/10_color_keying.dir/src/test.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/10_color_keying/build/src/test.c > CMakeFiles/10_color_keying.dir/src/test.c.i

CMakeFiles/10_color_keying.dir/src/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/10_color_keying.dir/src/test.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/10_color_keying/build/src/test.c -o CMakeFiles/10_color_keying.dir/src/test.c.s

CMakeFiles/10_color_keying.dir/src/test.c.o.requires:
.PHONY : CMakeFiles/10_color_keying.dir/src/test.c.o.requires

CMakeFiles/10_color_keying.dir/src/test.c.o.provides: CMakeFiles/10_color_keying.dir/src/test.c.o.requires
	$(MAKE) -f CMakeFiles/10_color_keying.dir/build.make CMakeFiles/10_color_keying.dir/src/test.c.o.provides.build
.PHONY : CMakeFiles/10_color_keying.dir/src/test.c.o.provides

CMakeFiles/10_color_keying.dir/src/test.c.o.provides.build: CMakeFiles/10_color_keying.dir/src/test.c.o

# Object files for target 10_color_keying
10_color_keying_OBJECTS = \
"CMakeFiles/10_color_keying.dir/src/test.c.o"

# External object files for target 10_color_keying
10_color_keying_EXTERNAL_OBJECTS =

10_color_keying: CMakeFiles/10_color_keying.dir/src/test.c.o
10_color_keying: CMakeFiles/10_color_keying.dir/build.make
10_color_keying: CMakeFiles/10_color_keying.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable 10_color_keying"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10_color_keying.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10_color_keying.dir/build: 10_color_keying
.PHONY : CMakeFiles/10_color_keying.dir/build

CMakeFiles/10_color_keying.dir/requires: CMakeFiles/10_color_keying.dir/src/test.c.o.requires
.PHONY : CMakeFiles/10_color_keying.dir/requires

CMakeFiles/10_color_keying.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10_color_keying.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10_color_keying.dir/clean

CMakeFiles/10_color_keying.dir/depend: src/test.c
CMakeFiles/10_color_keying.dir/depend: vala.stamp
	cd /home/bruce/SDL2/10_color_keying/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bruce/SDL2/10_color_keying /home/bruce/SDL2/10_color_keying /home/bruce/SDL2/10_color_keying/build /home/bruce/SDL2/10_color_keying/build /home/bruce/SDL2/10_color_keying/build/CMakeFiles/10_color_keying.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/10_color_keying.dir/depend
