# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\C..CplusPlus\CLion-2021.1.1.win\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = E:\C..CplusPlus\CLion-2021.1.1.win\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FIRST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FIRST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FIRST.dir/flags.make

CMakeFiles/FIRST.dir/main.c.obj: CMakeFiles/FIRST.dir/flags.make
CMakeFiles/FIRST.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FIRST.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FIRST.dir\main.c.obj -c E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\main.c

CMakeFiles/FIRST.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FIRST.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\main.c > CMakeFiles\FIRST.dir\main.c.i

CMakeFiles/FIRST.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FIRST.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\main.c -o CMakeFiles\FIRST.dir\main.c.s

# Object files for target FIRST
FIRST_OBJECTS = \
"CMakeFiles/FIRST.dir/main.c.obj"

# External object files for target FIRST
FIRST_EXTERNAL_OBJECTS =

FIRST.exe: CMakeFiles/FIRST.dir/main.c.obj
FIRST.exe: CMakeFiles/FIRST.dir/build.make
FIRST.exe: CMakeFiles/FIRST.dir/linklibs.rsp
FIRST.exe: CMakeFiles/FIRST.dir/objects1.rsp
FIRST.exe: CMakeFiles/FIRST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FIRST.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FIRST.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FIRST.dir/build: FIRST.exe

.PHONY : CMakeFiles/FIRST.dir/build

CMakeFiles/FIRST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FIRST.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FIRST.dir/clean

CMakeFiles/FIRST.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug E:\C..CplusPlus\CLion-2021.1.1.win\PROJECTS\FIRST\cmake-build-debug\CMakeFiles\FIRST.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FIRST.dir/depend
