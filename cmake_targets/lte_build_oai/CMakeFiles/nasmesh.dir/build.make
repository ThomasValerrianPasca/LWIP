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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oai/openairinterface5g/cmake_targets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oai/openairinterface5g/cmake_targets/lte_build_oai

# Utility rule file for nasmesh.

# Include the progress variables for this target.
include CMakeFiles/nasmesh.dir/progress.make

CMakeFiles/nasmesh: nasmesh.ko

nasmesh.ko:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/oai/openairinterface5g/cmake_targets/lte_build_oai/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold /home/oai/openairinterface5g/openair2/NETWORK_DRIVER/MESH/netlink.c
	cd /home/oai/openairinterface5g/cmake_targets/lte_build_oai/CMakeFiles/nasmesh && make -C /lib/modules/3.19.0-61-lowlatency/build M=/home/oai/openairinterface5g/cmake_targets/lte_build_oai/CMakeFiles/nasmesh

nasmesh: CMakeFiles/nasmesh
nasmesh: nasmesh.ko
nasmesh: CMakeFiles/nasmesh.dir/build.make
.PHONY : nasmesh

# Rule to build all files generated by this target.
CMakeFiles/nasmesh.dir/build: nasmesh
.PHONY : CMakeFiles/nasmesh.dir/build

CMakeFiles/nasmesh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nasmesh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nasmesh.dir/clean

CMakeFiles/nasmesh.dir/depend:
	cd /home/oai/openairinterface5g/cmake_targets/lte_build_oai && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oai/openairinterface5g/cmake_targets /home/oai/openairinterface5g/cmake_targets /home/oai/openairinterface5g/cmake_targets/lte_build_oai /home/oai/openairinterface5g/cmake_targets/lte_build_oai /home/oai/openairinterface5g/cmake_targets/lte_build_oai/CMakeFiles/nasmesh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nasmesh.dir/depend

