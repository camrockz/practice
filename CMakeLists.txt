cmake_minimum_required(VERSION 3.0)

project(practice LANGUAGES C)

add_library(libpractice STATIC libpractice.c)

add_executable(practice practice.c)

install(TARGETS practice RUNTIME DESTINATION bin)

target_link_libraries(practice m libpractice)
