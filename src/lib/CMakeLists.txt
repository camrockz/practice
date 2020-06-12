add_library(practice STATIC practice.c)

target_include_directories(practice PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
