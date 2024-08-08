cmake_minimum_required(VERSION 3.27)
project(FBD C)

set(CMAKE_C_STANDARD 11)

add_executable(FBD main.c
        include/usr.h
        include/joke.h)