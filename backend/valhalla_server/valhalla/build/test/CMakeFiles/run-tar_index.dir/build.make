# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yijungu/cnumap/backend/valhalla_server/valhalla

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build

# Utility rule file for run-tar_index.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/run-tar_index.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/run-tar_index.dir/progress.make

test/CMakeFiles/run-tar_index: test/tar_index.log

test/tar_index.log: test/tar_index
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating tar_index.log"
	LOCPATH=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/locales /bin/bash -c "/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/tar_index >& /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/tar_index.log       && echo [PASS] tar_index       || ( exit=\$$? ;            echo [FAIL] tar_index ;            cat /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/tar_index.log ;            exit \$$exit )"

test/CMakeFiles/run-tar_index.dir/codegen:
.PHONY : test/CMakeFiles/run-tar_index.dir/codegen

run-tar_index: test/CMakeFiles/run-tar_index
run-tar_index: test/tar_index.log
run-tar_index: test/CMakeFiles/run-tar_index.dir/build.make
.PHONY : run-tar_index

# Rule to build all files generated by this target.
test/CMakeFiles/run-tar_index.dir/build: run-tar_index
.PHONY : test/CMakeFiles/run-tar_index.dir/build

test/CMakeFiles/run-tar_index.dir/clean:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && $(CMAKE_COMMAND) -P CMakeFiles/run-tar_index.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/run-tar_index.dir/clean

test/CMakeFiles/run-tar_index.dir/depend:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yijungu/cnumap/backend/valhalla_server/valhalla /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/CMakeFiles/run-tar_index.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/run-tar_index.dir/depend

