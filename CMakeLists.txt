cmake_minimum_required(VERSION 3.0)

project(practice LANGUAGES C)

add_library(practice STATIC practice.c)

add_executable(practicebin 5.c)

install(TARGETS practicebin RUNTIME DESTINATION practicebin)

target_link_libraries(practicebin m practice)
