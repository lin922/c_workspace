# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.6\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.6\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\Desktop\c_workSpace\lc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01dp1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/01dp1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01dp1.dir/flags.make

CMakeFiles/01dp1.dir/0-1packagedp1.cpp.obj: CMakeFiles/01dp1.dir/flags.make
CMakeFiles/01dp1.dir/0-1packagedp1.cpp.obj: ../0-1packagedp1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01dp1.dir/0-1packagedp1.cpp.obj"
	C:\PROGRA~2\MinGW\X86_64~1.0-R\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\01dp1.dir\0-1packagedp1.cpp.obj -c C:\Users\Administrator\Desktop\c_workSpace\lc\0-1packagedp1.cpp

CMakeFiles/01dp1.dir/0-1packagedp1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01dp1.dir/0-1packagedp1.cpp.i"
	C:\PROGRA~2\MinGW\X86_64~1.0-R\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\Desktop\c_workSpace\lc\0-1packagedp1.cpp > CMakeFiles\01dp1.dir\0-1packagedp1.cpp.i

CMakeFiles/01dp1.dir/0-1packagedp1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01dp1.dir/0-1packagedp1.cpp.s"
	C:\PROGRA~2\MinGW\X86_64~1.0-R\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\Desktop\c_workSpace\lc\0-1packagedp1.cpp -o CMakeFiles\01dp1.dir\0-1packagedp1.cpp.s

# Object files for target 01dp1
01dp1_OBJECTS = \
"CMakeFiles/01dp1.dir/0-1packagedp1.cpp.obj"

# External object files for target 01dp1
01dp1_EXTERNAL_OBJECTS =

01dp1.exe: CMakeFiles/01dp1.dir/0-1packagedp1.cpp.obj
01dp1.exe: CMakeFiles/01dp1.dir/build.make
01dp1.exe: CMakeFiles/01dp1.dir/linklibs.rsp
01dp1.exe: CMakeFiles/01dp1.dir/objects1.rsp
01dp1.exe: CMakeFiles/01dp1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01dp1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\01dp1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01dp1.dir/build: 01dp1.exe

.PHONY : CMakeFiles/01dp1.dir/build

CMakeFiles/01dp1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\01dp1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/01dp1.dir/clean

CMakeFiles/01dp1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Desktop\c_workSpace\lc C:\Users\Administrator\Desktop\c_workSpace\lc C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug C:\Users\Administrator\Desktop\c_workSpace\lc\cmake-build-debug\CMakeFiles\01dp1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/01dp1.dir/depend

