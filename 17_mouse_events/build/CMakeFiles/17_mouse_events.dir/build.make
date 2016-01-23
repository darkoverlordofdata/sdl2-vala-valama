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
CMAKE_SOURCE_DIR = /home/bruce/SDL2/17_mouse_events

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bruce/SDL2/17_mouse_events/build

# Include any dependencies generated for this target.
include CMakeFiles/17_mouse_events.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/17_mouse_events.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/17_mouse_events.dir/flags.make

src/MyButton.c: vala.stamp

src/MyTexture.c: src/MyButton.c

src/test.c: src/MyButton.c

vala.stamp: ../src/MyButton.vala
vala.stamp: ../src/MyTexture.vala
vala.stamp: ../src/test.vala
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/17_mouse_events/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating src/MyButton.c, src/MyTexture.c, src/test.c"
	/usr/bin/valac -C -b /home/bruce/SDL2/17_mouse_events -d /home/bruce/SDL2/17_mouse_events/build --pkg=SDL2_gfx --pkg=SDL2_image --pkg=SDL2_ttf --pkg=glib-2.0 --pkg=gobject-2.0 --pkg=sdl2 --thread --target-glib 2.42.2 /home/bruce/SDL2/17_mouse_events/src/MyButton.vala /home/bruce/SDL2/17_mouse_events/src/MyTexture.vala /home/bruce/SDL2/17_mouse_events/src/test.vala
	/usr/bin/cmake -E touch vala.stamp

CMakeFiles/17_mouse_events.dir/src/MyButton.c.o: CMakeFiles/17_mouse_events.dir/flags.make
CMakeFiles/17_mouse_events.dir/src/MyButton.c.o: src/MyButton.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/17_mouse_events/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/17_mouse_events.dir/src/MyButton.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/17_mouse_events.dir/src/MyButton.c.o   -c /home/bruce/SDL2/17_mouse_events/build/src/MyButton.c

CMakeFiles/17_mouse_events.dir/src/MyButton.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/17_mouse_events.dir/src/MyButton.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/17_mouse_events/build/src/MyButton.c > CMakeFiles/17_mouse_events.dir/src/MyButton.c.i

CMakeFiles/17_mouse_events.dir/src/MyButton.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/17_mouse_events.dir/src/MyButton.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/17_mouse_events/build/src/MyButton.c -o CMakeFiles/17_mouse_events.dir/src/MyButton.c.s

CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.requires:
.PHONY : CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.requires

CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.provides: CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.requires
	$(MAKE) -f CMakeFiles/17_mouse_events.dir/build.make CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.provides.build
.PHONY : CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.provides

CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.provides.build: CMakeFiles/17_mouse_events.dir/src/MyButton.c.o

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o: CMakeFiles/17_mouse_events.dir/flags.make
CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o: src/MyTexture.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/17_mouse_events/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o   -c /home/bruce/SDL2/17_mouse_events/build/src/MyTexture.c

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/17_mouse_events.dir/src/MyTexture.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/17_mouse_events/build/src/MyTexture.c > CMakeFiles/17_mouse_events.dir/src/MyTexture.c.i

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/17_mouse_events.dir/src/MyTexture.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/17_mouse_events/build/src/MyTexture.c -o CMakeFiles/17_mouse_events.dir/src/MyTexture.c.s

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.requires:
.PHONY : CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.requires

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.provides: CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.requires
	$(MAKE) -f CMakeFiles/17_mouse_events.dir/build.make CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.provides.build
.PHONY : CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.provides

CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.provides.build: CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o

CMakeFiles/17_mouse_events.dir/src/test.c.o: CMakeFiles/17_mouse_events.dir/flags.make
CMakeFiles/17_mouse_events.dir/src/test.c.o: src/test.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/SDL2/17_mouse_events/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/17_mouse_events.dir/src/test.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/17_mouse_events.dir/src/test.c.o   -c /home/bruce/SDL2/17_mouse_events/build/src/test.c

CMakeFiles/17_mouse_events.dir/src/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/17_mouse_events.dir/src/test.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/bruce/SDL2/17_mouse_events/build/src/test.c > CMakeFiles/17_mouse_events.dir/src/test.c.i

CMakeFiles/17_mouse_events.dir/src/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/17_mouse_events.dir/src/test.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/bruce/SDL2/17_mouse_events/build/src/test.c -o CMakeFiles/17_mouse_events.dir/src/test.c.s

CMakeFiles/17_mouse_events.dir/src/test.c.o.requires:
.PHONY : CMakeFiles/17_mouse_events.dir/src/test.c.o.requires

CMakeFiles/17_mouse_events.dir/src/test.c.o.provides: CMakeFiles/17_mouse_events.dir/src/test.c.o.requires
	$(MAKE) -f CMakeFiles/17_mouse_events.dir/build.make CMakeFiles/17_mouse_events.dir/src/test.c.o.provides.build
.PHONY : CMakeFiles/17_mouse_events.dir/src/test.c.o.provides

CMakeFiles/17_mouse_events.dir/src/test.c.o.provides.build: CMakeFiles/17_mouse_events.dir/src/test.c.o

# Object files for target 17_mouse_events
17_mouse_events_OBJECTS = \
"CMakeFiles/17_mouse_events.dir/src/MyButton.c.o" \
"CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o" \
"CMakeFiles/17_mouse_events.dir/src/test.c.o"

# External object files for target 17_mouse_events
17_mouse_events_EXTERNAL_OBJECTS =

17_mouse_events: CMakeFiles/17_mouse_events.dir/src/MyButton.c.o
17_mouse_events: CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o
17_mouse_events: CMakeFiles/17_mouse_events.dir/src/test.c.o
17_mouse_events: CMakeFiles/17_mouse_events.dir/build.make
17_mouse_events: CMakeFiles/17_mouse_events.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable 17_mouse_events"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/17_mouse_events.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/17_mouse_events.dir/build: 17_mouse_events
.PHONY : CMakeFiles/17_mouse_events.dir/build

CMakeFiles/17_mouse_events.dir/requires: CMakeFiles/17_mouse_events.dir/src/MyButton.c.o.requires
CMakeFiles/17_mouse_events.dir/requires: CMakeFiles/17_mouse_events.dir/src/MyTexture.c.o.requires
CMakeFiles/17_mouse_events.dir/requires: CMakeFiles/17_mouse_events.dir/src/test.c.o.requires
.PHONY : CMakeFiles/17_mouse_events.dir/requires

CMakeFiles/17_mouse_events.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/17_mouse_events.dir/cmake_clean.cmake
.PHONY : CMakeFiles/17_mouse_events.dir/clean

CMakeFiles/17_mouse_events.dir/depend: src/MyButton.c
CMakeFiles/17_mouse_events.dir/depend: src/MyTexture.c
CMakeFiles/17_mouse_events.dir/depend: src/test.c
CMakeFiles/17_mouse_events.dir/depend: vala.stamp
	cd /home/bruce/SDL2/17_mouse_events/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bruce/SDL2/17_mouse_events /home/bruce/SDL2/17_mouse_events /home/bruce/SDL2/17_mouse_events/build /home/bruce/SDL2/17_mouse_events/build /home/bruce/SDL2/17_mouse_events/build/CMakeFiles/17_mouse_events.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/17_mouse_events.dir/depend

