cmake_minimum_required(VERSION 3.20)
project(Time_Management_Master)

set(CMAKE_C_STANDARD 99)

include_directories(include)
add_executable(Time_Management_Master
        main.c
        src/Timer.c
        src/Schedule.c
        src/Settings.c
        src/Print.c
        src/Calendar.c)