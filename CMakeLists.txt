cmake_minimum_required(VERSION 3.12)

project(practice LANGUAGES C)

add_library(practice STATIC practice.c)

add_executable(practicebin 7.c)

install(TARGETS practicebin RUNTIME DESTINATION practicebin)

target_link_libraries(practicebin m practice)
