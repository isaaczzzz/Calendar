cmake_minimum_required(VERSION 3.20)
project(Calendar)

set(CMAKE_C_STANDARD 99)

include_directories(include)
add_executable(Calendar
        main.c
        src/Timer.c
        src/Schedule.c
        src/Settings.c
        src/SetAlarm.c
        src/Print.c src/Calendar.c)