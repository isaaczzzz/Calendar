# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\Software\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Software\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ZXH\GitHub\Calendar\ClionProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Calendar.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Calendar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calendar.dir/flags.make

CMakeFiles/Calendar.dir/main.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/main.c.obj: CMakeFiles/Calendar.dir/includes_C.rsp
CMakeFiles/Calendar.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Calendar.dir/main.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Calendar.dir\main.c.obj -c C:\Users\ZXH\GitHub\Calendar\ClionProject\main.c

CMakeFiles/Calendar.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calendar.dir/main.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ZXH\GitHub\Calendar\ClionProject\main.c > CMakeFiles\Calendar.dir\main.c.i

CMakeFiles/Calendar.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calendar.dir/main.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ZXH\GitHub\Calendar\ClionProject\main.c -o CMakeFiles\Calendar.dir\main.c.s

CMakeFiles/Calendar.dir/src/Timer.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/src/Timer.c.obj: CMakeFiles/Calendar.dir/includes_C.rsp
CMakeFiles/Calendar.dir/src/Timer.c.obj: ../src/Timer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Calendar.dir/src/Timer.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Calendar.dir\src\Timer.c.obj -c C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Timer.c

CMakeFiles/Calendar.dir/src/Timer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calendar.dir/src/Timer.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Timer.c > CMakeFiles\Calendar.dir\src\Timer.c.i

CMakeFiles/Calendar.dir/src/Timer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calendar.dir/src/Timer.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Timer.c -o CMakeFiles\Calendar.dir\src\Timer.c.s

CMakeFiles/Calendar.dir/src/Schedule.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/src/Schedule.c.obj: CMakeFiles/Calendar.dir/includes_C.rsp
CMakeFiles/Calendar.dir/src/Schedule.c.obj: ../src/Schedule.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Calendar.dir/src/Schedule.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Calendar.dir\src\Schedule.c.obj -c C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Schedule.c

CMakeFiles/Calendar.dir/src/Schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calendar.dir/src/Schedule.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Schedule.c > CMakeFiles\Calendar.dir\src\Schedule.c.i

CMakeFiles/Calendar.dir/src/Schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calendar.dir/src/Schedule.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Schedule.c -o CMakeFiles\Calendar.dir\src\Schedule.c.s

CMakeFiles/Calendar.dir/src/Settings.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/src/Settings.c.obj: CMakeFiles/Calendar.dir/includes_C.rsp
CMakeFiles/Calendar.dir/src/Settings.c.obj: ../src/Settings.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Calendar.dir/src/Settings.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Calendar.dir\src\Settings.c.obj -c C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Settings.c

CMakeFiles/Calendar.dir/src/Settings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calendar.dir/src/Settings.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Settings.c > CMakeFiles\Calendar.dir\src\Settings.c.i

CMakeFiles/Calendar.dir/src/Settings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calendar.dir/src/Settings.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ZXH\GitHub\Calendar\ClionProject\src\Settings.c -o CMakeFiles\Calendar.dir\src\Settings.c.s

CMakeFiles/Calendar.dir/src/SetAlarm.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/src/SetAlarm.c.obj: CMakeFiles/Calendar.dir/includes_C.rsp
CMakeFiles/Calendar.dir/src/SetAlarm.c.obj: ../src/SetAlarm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Calendar.dir/src/SetAlarm.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Calendar.dir\src\SetAlarm.c.obj -c C:\Users\ZXH\GitHub\Calendar\ClionProject\src\SetAlarm.c

CMakeFiles/Calendar.dir/src/SetAlarm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calendar.dir/src/SetAlarm.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ZXH\GitHub\Calendar\ClionProject\src\SetAlarm.c > CMakeFiles\Calendar.dir\src\SetAlarm.c.i

CMakeFiles/Calendar.dir/src/SetAlarm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calendar.dir/src/SetAlarm.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ZXH\GitHub\Calendar\ClionProject\src\SetAlarm.c -o CMakeFiles\Calendar.dir\src\SetAlarm.c.s

# Object files for target Calendar
Calendar_OBJECTS = \
"CMakeFiles/Calendar.dir/main.c.obj" \
"CMakeFiles/Calendar.dir/src/Timer.c.obj" \
"CMakeFiles/Calendar.dir/src/Schedule.c.obj" \
"CMakeFiles/Calendar.dir/src/Settings.c.obj" \
"CMakeFiles/Calendar.dir/src/SetAlarm.c.obj"

# External object files for target Calendar
Calendar_EXTERNAL_OBJECTS =

Calendar.exe: CMakeFiles/Calendar.dir/main.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/src/Timer.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/src/Schedule.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/src/Settings.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/src/SetAlarm.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/build.make
Calendar.exe: CMakeFiles/Calendar.dir/linklibs.rsp
Calendar.exe: CMakeFiles/Calendar.dir/objects1.rsp
Calendar.exe: CMakeFiles/Calendar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Calendar.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Calendar.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calendar.dir/build: Calendar.exe
.PHONY : CMakeFiles/Calendar.dir/build

CMakeFiles/Calendar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Calendar.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Calendar.dir/clean

CMakeFiles/Calendar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ZXH\GitHub\Calendar\ClionProject C:\Users\ZXH\GitHub\Calendar\ClionProject C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug C:\Users\ZXH\GitHub\Calendar\ClionProject\cmake-build-debug\CMakeFiles\Calendar.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Calendar.dir/depend

