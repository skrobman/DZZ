# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Zadanie_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zadanie_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zadanie_II.dir/flags.make

CMakeFiles/Zadanie_II.dir/main.cpp.obj: CMakeFiles/Zadanie_II.dir/flags.make
CMakeFiles/Zadanie_II.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zadanie_II.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Zadanie_II.dir\main.cpp.obj -c "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\main.cpp"

CMakeFiles/Zadanie_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zadanie_II.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\main.cpp" > CMakeFiles\Zadanie_II.dir\main.cpp.i

CMakeFiles/Zadanie_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zadanie_II.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\main.cpp" -o CMakeFiles\Zadanie_II.dir\main.cpp.s

# Object files for target Zadanie_II
Zadanie_II_OBJECTS = \
"CMakeFiles/Zadanie_II.dir/main.cpp.obj"

# External object files for target Zadanie_II
Zadanie_II_EXTERNAL_OBJECTS =

Zadanie_II.exe: CMakeFiles/Zadanie_II.dir/main.cpp.obj
Zadanie_II.exe: CMakeFiles/Zadanie_II.dir/build.make
Zadanie_II.exe: CMakeFiles/Zadanie_II.dir/linklibs.rsp
Zadanie_II.exe: CMakeFiles/Zadanie_II.dir/objects1.rsp
Zadanie_II.exe: CMakeFiles/Zadanie_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Zadanie_II.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Zadanie_II.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zadanie_II.dir/build: Zadanie_II.exe

.PHONY : CMakeFiles/Zadanie_II.dir/build

CMakeFiles/Zadanie_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Zadanie_II.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Zadanie_II.dir/clean

CMakeFiles/Zadanie_II.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II" "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II" "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug" "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug" "C:\Users\User\Desktop\skrobman\C++\Dz na 26.12.20\Zadanie II\cmake-build-debug\CMakeFiles\Zadanie_II.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Zadanie_II.dir/depend

