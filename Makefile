# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:
.PHONY : .NOTPARALLEL

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
CMAKE_SOURCE_DIR = /home/guillaume/bzr_projects/projetc++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/guillaume/bzr_projects/projetc++

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/guillaume/bzr_projects/projetc++/CMakeFiles /home/guillaume/bzr_projects/projetc++/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/guillaume/bzr_projects/projetc++/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named TestProj

# Build rule for target.
TestProj: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 TestProj
.PHONY : TestProj

# fast build rule for target.
TestProj/fast:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/build
.PHONY : TestProj/fast

GUI/Fenetre_jeu.o: GUI/Fenetre_jeu.cpp.o
.PHONY : GUI/Fenetre_jeu.o

# target to build an object file
GUI/Fenetre_jeu.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/Fenetre_jeu.cpp.o
.PHONY : GUI/Fenetre_jeu.cpp.o

GUI/Fenetre_jeu.i: GUI/Fenetre_jeu.cpp.i
.PHONY : GUI/Fenetre_jeu.i

# target to preprocess a source file
GUI/Fenetre_jeu.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/Fenetre_jeu.cpp.i
.PHONY : GUI/Fenetre_jeu.cpp.i

GUI/Fenetre_jeu.s: GUI/Fenetre_jeu.cpp.s
.PHONY : GUI/Fenetre_jeu.s

# target to generate assembly for a file
GUI/Fenetre_jeu.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/Fenetre_jeu.cpp.s
.PHONY : GUI/Fenetre_jeu.cpp.s

GUI/QSFMLCanvas.o: GUI/QSFMLCanvas.cpp.o
.PHONY : GUI/QSFMLCanvas.o

# target to build an object file
GUI/QSFMLCanvas.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/QSFMLCanvas.cpp.o
.PHONY : GUI/QSFMLCanvas.cpp.o

GUI/QSFMLCanvas.i: GUI/QSFMLCanvas.cpp.i
.PHONY : GUI/QSFMLCanvas.i

# target to preprocess a source file
GUI/QSFMLCanvas.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/QSFMLCanvas.cpp.i
.PHONY : GUI/QSFMLCanvas.cpp.i

GUI/QSFMLCanvas.s: GUI/QSFMLCanvas.cpp.s
.PHONY : GUI/QSFMLCanvas.s

# target to generate assembly for a file
GUI/QSFMLCanvas.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/QSFMLCanvas.cpp.s
.PHONY : GUI/QSFMLCanvas.cpp.s

GUI/fenetre.o: GUI/fenetre.cpp.o
.PHONY : GUI/fenetre.o

# target to build an object file
GUI/fenetre.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/fenetre.cpp.o
.PHONY : GUI/fenetre.cpp.o

GUI/fenetre.i: GUI/fenetre.cpp.i
.PHONY : GUI/fenetre.i

# target to preprocess a source file
GUI/fenetre.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/fenetre.cpp.i
.PHONY : GUI/fenetre.cpp.i

GUI/fenetre.s: GUI/fenetre.cpp.s
.PHONY : GUI/fenetre.s

# target to generate assembly for a file
GUI/fenetre.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/fenetre.cpp.s
.PHONY : GUI/fenetre.cpp.s

GUI/jeu.o: GUI/jeu.cpp.o
.PHONY : GUI/jeu.o

# target to build an object file
GUI/jeu.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/jeu.cpp.o
.PHONY : GUI/jeu.cpp.o

GUI/jeu.i: GUI/jeu.cpp.i
.PHONY : GUI/jeu.i

# target to preprocess a source file
GUI/jeu.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/jeu.cpp.i
.PHONY : GUI/jeu.cpp.i

GUI/jeu.s: GUI/jeu.cpp.s
.PHONY : GUI/jeu.s

# target to generate assembly for a file
GUI/jeu.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/jeu.cpp.s
.PHONY : GUI/jeu.cpp.s

GUI/menu.o: GUI/menu.cpp.o
.PHONY : GUI/menu.o

# target to build an object file
GUI/menu.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/menu.cpp.o
.PHONY : GUI/menu.cpp.o

GUI/menu.i: GUI/menu.cpp.i
.PHONY : GUI/menu.i

# target to preprocess a source file
GUI/menu.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/menu.cpp.i
.PHONY : GUI/menu.cpp.i

GUI/menu.s: GUI/menu.cpp.s
.PHONY : GUI/menu.s

# target to generate assembly for a file
GUI/menu.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/menu.cpp.s
.PHONY : GUI/menu.cpp.s

GUI/moc_Fenetre_jeu.o: GUI/moc_Fenetre_jeu.cxx.o
.PHONY : GUI/moc_Fenetre_jeu.o

# target to build an object file
GUI/moc_Fenetre_jeu.cxx.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_Fenetre_jeu.cxx.o
.PHONY : GUI/moc_Fenetre_jeu.cxx.o

GUI/moc_Fenetre_jeu.i: GUI/moc_Fenetre_jeu.cxx.i
.PHONY : GUI/moc_Fenetre_jeu.i

# target to preprocess a source file
GUI/moc_Fenetre_jeu.cxx.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_Fenetre_jeu.cxx.i
.PHONY : GUI/moc_Fenetre_jeu.cxx.i

GUI/moc_Fenetre_jeu.s: GUI/moc_Fenetre_jeu.cxx.s
.PHONY : GUI/moc_Fenetre_jeu.s

# target to generate assembly for a file
GUI/moc_Fenetre_jeu.cxx.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_Fenetre_jeu.cxx.s
.PHONY : GUI/moc_Fenetre_jeu.cxx.s

GUI/moc_QSFMLCanvas.o: GUI/moc_QSFMLCanvas.cxx.o
.PHONY : GUI/moc_QSFMLCanvas.o

# target to build an object file
GUI/moc_QSFMLCanvas.cxx.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_QSFMLCanvas.cxx.o
.PHONY : GUI/moc_QSFMLCanvas.cxx.o

GUI/moc_QSFMLCanvas.i: GUI/moc_QSFMLCanvas.cxx.i
.PHONY : GUI/moc_QSFMLCanvas.i

# target to preprocess a source file
GUI/moc_QSFMLCanvas.cxx.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_QSFMLCanvas.cxx.i
.PHONY : GUI/moc_QSFMLCanvas.cxx.i

GUI/moc_QSFMLCanvas.s: GUI/moc_QSFMLCanvas.cxx.s
.PHONY : GUI/moc_QSFMLCanvas.s

# target to generate assembly for a file
GUI/moc_QSFMLCanvas.cxx.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_QSFMLCanvas.cxx.s
.PHONY : GUI/moc_QSFMLCanvas.cxx.s

GUI/moc_fenetre.o: GUI/moc_fenetre.cxx.o
.PHONY : GUI/moc_fenetre.o

# target to build an object file
GUI/moc_fenetre.cxx.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_fenetre.cxx.o
.PHONY : GUI/moc_fenetre.cxx.o

GUI/moc_fenetre.i: GUI/moc_fenetre.cxx.i
.PHONY : GUI/moc_fenetre.i

# target to preprocess a source file
GUI/moc_fenetre.cxx.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_fenetre.cxx.i
.PHONY : GUI/moc_fenetre.cxx.i

GUI/moc_fenetre.s: GUI/moc_fenetre.cxx.s
.PHONY : GUI/moc_fenetre.s

# target to generate assembly for a file
GUI/moc_fenetre.cxx.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_fenetre.cxx.s
.PHONY : GUI/moc_fenetre.cxx.s

GUI/moc_jeu.o: GUI/moc_jeu.cxx.o
.PHONY : GUI/moc_jeu.o

# target to build an object file
GUI/moc_jeu.cxx.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_jeu.cxx.o
.PHONY : GUI/moc_jeu.cxx.o

GUI/moc_jeu.i: GUI/moc_jeu.cxx.i
.PHONY : GUI/moc_jeu.i

# target to preprocess a source file
GUI/moc_jeu.cxx.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_jeu.cxx.i
.PHONY : GUI/moc_jeu.cxx.i

GUI/moc_jeu.s: GUI/moc_jeu.cxx.s
.PHONY : GUI/moc_jeu.s

# target to generate assembly for a file
GUI/moc_jeu.cxx.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_jeu.cxx.s
.PHONY : GUI/moc_jeu.cxx.s

GUI/moc_menu.o: GUI/moc_menu.cxx.o
.PHONY : GUI/moc_menu.o

# target to build an object file
GUI/moc_menu.cxx.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_menu.cxx.o
.PHONY : GUI/moc_menu.cxx.o

GUI/moc_menu.i: GUI/moc_menu.cxx.i
.PHONY : GUI/moc_menu.i

# target to preprocess a source file
GUI/moc_menu.cxx.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_menu.cxx.i
.PHONY : GUI/moc_menu.cxx.i

GUI/moc_menu.s: GUI/moc_menu.cxx.s
.PHONY : GUI/moc_menu.s

# target to generate assembly for a file
GUI/moc_menu.cxx.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/GUI/moc_menu.cxx.s
.PHONY : GUI/moc_menu.cxx.s

src/ants_world.o: src/ants_world.cpp.o
.PHONY : src/ants_world.o

# target to build an object file
src/ants_world.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/ants_world.cpp.o
.PHONY : src/ants_world.cpp.o

src/ants_world.i: src/ants_world.cpp.i
.PHONY : src/ants_world.i

# target to preprocess a source file
src/ants_world.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/ants_world.cpp.i
.PHONY : src/ants_world.cpp.i

src/ants_world.s: src/ants_world.cpp.s
.PHONY : src/ants_world.s

# target to generate assembly for a file
src/ants_world.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/ants_world.cpp.s
.PHONY : src/ants_world.cpp.s

src/cells_world.o: src/cells_world.cpp.o
.PHONY : src/cells_world.o

# target to build an object file
src/cells_world.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/cells_world.cpp.o
.PHONY : src/cells_world.cpp.o

src/cells_world.i: src/cells_world.cpp.i
.PHONY : src/cells_world.i

# target to preprocess a source file
src/cells_world.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/cells_world.cpp.i
.PHONY : src/cells_world.cpp.i

src/cells_world.s: src/cells_world.cpp.s
.PHONY : src/cells_world.s

# target to generate assembly for a file
src/cells_world.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/cells_world.cpp.s
.PHONY : src/cells_world.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/termites_world.o: src/termites_world.cpp.o
.PHONY : src/termites_world.o

# target to build an object file
src/termites_world.cpp.o:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/termites_world.cpp.o
.PHONY : src/termites_world.cpp.o

src/termites_world.i: src/termites_world.cpp.i
.PHONY : src/termites_world.i

# target to preprocess a source file
src/termites_world.cpp.i:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/termites_world.cpp.i
.PHONY : src/termites_world.cpp.i

src/termites_world.s: src/termites_world.cpp.s
.PHONY : src/termites_world.s

# target to generate assembly for a file
src/termites_world.cpp.s:
	$(MAKE) -f CMakeFiles/TestProj.dir/build.make CMakeFiles/TestProj.dir/src/termites_world.cpp.s
.PHONY : src/termites_world.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... TestProj"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... GUI/Fenetre_jeu.o"
	@echo "... GUI/Fenetre_jeu.i"
	@echo "... GUI/Fenetre_jeu.s"
	@echo "... GUI/QSFMLCanvas.o"
	@echo "... GUI/QSFMLCanvas.i"
	@echo "... GUI/QSFMLCanvas.s"
	@echo "... GUI/fenetre.o"
	@echo "... GUI/fenetre.i"
	@echo "... GUI/fenetre.s"
	@echo "... GUI/jeu.o"
	@echo "... GUI/jeu.i"
	@echo "... GUI/jeu.s"
	@echo "... GUI/menu.o"
	@echo "... GUI/menu.i"
	@echo "... GUI/menu.s"
	@echo "... GUI/moc_Fenetre_jeu.o"
	@echo "... GUI/moc_Fenetre_jeu.i"
	@echo "... GUI/moc_Fenetre_jeu.s"
	@echo "... GUI/moc_QSFMLCanvas.o"
	@echo "... GUI/moc_QSFMLCanvas.i"
	@echo "... GUI/moc_QSFMLCanvas.s"
	@echo "... GUI/moc_fenetre.o"
	@echo "... GUI/moc_fenetre.i"
	@echo "... GUI/moc_fenetre.s"
	@echo "... GUI/moc_jeu.o"
	@echo "... GUI/moc_jeu.i"
	@echo "... GUI/moc_jeu.s"
	@echo "... GUI/moc_menu.o"
	@echo "... GUI/moc_menu.i"
	@echo "... GUI/moc_menu.s"
	@echo "... src/ants_world.o"
	@echo "... src/ants_world.i"
	@echo "... src/ants_world.s"
	@echo "... src/cells_world.o"
	@echo "... src/cells_world.i"
	@echo "... src/cells_world.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/termites_world.o"
	@echo "... src/termites_world.i"
	@echo "... src/termites_world.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

