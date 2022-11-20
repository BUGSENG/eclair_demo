cmake_minimum_required(VERSION 2.8)
project(crc)
add_definitions(-DCRC_32)
add_executable(crc crc.c main.c reflect.c)
