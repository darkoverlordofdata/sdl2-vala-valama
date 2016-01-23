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
CMAKE_SOURCE_DIR = /home/bruce/SDL2/14_animated_sprites_and_vsync

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bruce/SDL2/14_animated_sprites_and_vsync/build

# Include any dependencies generated for this target.
include CMakeFiles/14_animated_sprites_and_vsync.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/14_animated_sprites_and_vsync.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/14_animated_sprites_and_vsync.dir/flags.make

src/MyTexture.c: vala.stamp

src/test.c: src/MyTexture.c

vala.stamp: ../src/MyTexture.vala
vala.stamp: ../src/test.vala
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/14_animated_sprites_and_vsync/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating src/MyTexture.c, src/test.c"
	/usr/bin/valac -C -b /home/bruce/SDL2/14_animated_sprites_and_vsync -d /home/bruce/SDL2/14_animated_sprites_and_vsync/build --pkg=SDL2_gfx --pkg=SDL2_image --pkg=SDL2_ttf --pkg=glib-2.0 --pkg=gobject-2.0 --pkg=sdl2 --thread --target-glib 2.42.2 /home/bruce/SDL2/14_animated_sprites_and_vsync/src/MyTexture.vala /home/bruce/SDL2/14_animated_sprites_and_vsync/src/test.vala
	/usr/bin/cmake -E touch vala.stamp

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o: CMakeFiles/14_animated_sprites_and_vsync.dir/flags.make
CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o: src/MyTexture.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/14_animated_sprites_and_vsync/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o   -c /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/MyTexture.c

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/MyTexture.c > CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.i

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/MyTexture.c -o CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.s

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.requires:
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.requires

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.provides: CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.requires
	$(MAKE) -f CMakeFiles/14_animated_sprites_and_vsync.dir/build.make CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.provides.build
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.provides

CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.provides.build: CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o: CMakeFiles/14_animated_sprites_and_vsync.dir/flags.make
CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o: src/test.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/14_animated_sprites_and_vsync/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o   -c /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/test.c

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/test.c > CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.i

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/14_animated_sprites_and_vsync/build/src/test.c -o CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.s

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.requires:
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.requires

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.provides: CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.requires
	$(MAKE) -f CMakeFiles/14_animated_sprites_and_vsync.dir/build.make CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.provides.build
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.provides

CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.provides.build: CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o

# Object files for target 14_animated_sprites_and_vsync
14_animated_sprites_and_vsync_OBJECTS = \
"CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o" \
"CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o"

# External object files for target 14_animated_sprites_and_vsync
14_animated_sprites_and_vsync_EXTERNAL_OBJECTS =

14_animated_sprites_and_vsync: CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o
14_animated_sprites_and_vsync: CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o
14_animated_sprites_and_vsync: CMakeFiles/14_animated_sprites_and_vsync.dir/build.make
14_animated_sprites_and_vsync: CMakeFiles/14_animated_sprites_and_vsync.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable 14_animated_sprites_and_vsync"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/14_animated_sprites_and_vsync.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/14_animated_sprites_and_vsync.dir/build: 14_animated_sprites_and_vsync
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/build

CMakeFiles/14_animated_sprites_and_vsync.dir/requires: CMakeFiles/14_animated_sprites_and_vsync.dir/src/MyTexture.c.o.requires
CMakeFiles/14_animated_sprites_and_vsync.dir/requires: CMakeFiles/14_animated_sprites_and_vsync.dir/src/test.c.o.requires
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/requires

CMakeFiles/14_animated_sprites_and_vsync.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/14_animated_sprites_and_vsync.dir/cmake_clean.cmake
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/clean

CMakeFiles/14_animated_sprites_and_vsync.dir/depend: src/MyTexture.c
CMakeFiles/14_animated_sprites_and_vsync.dir/depend: src/test.c
CMakeFiles/14_animated_sprites_and_vsync.dir/depend: vala.stamp
	cd /home/bruce/SDL2/14_animated_sprites_and_vsync/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bruce/SDL2/14_animated_sprites_and_vsync /home/bruce/SDL2/14_animated_sprites_and_vsync /home/bruce/SDL2/14_animated_sprites_and_vsync/build /home/bruce/SDL2/14_animated_sprites_and_vsync/build /home/bruce/SDL2/14_animated_sprites_and_vsync/build/CMakeFiles/14_animated_sprites_and_vsync.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/14_animated_sprites_and_vsync.dir/depend

