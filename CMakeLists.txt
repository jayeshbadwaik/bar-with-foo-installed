# Minimum CMake Required
cmake_minimum_required(VERSION 3.9)

# Name of the project
project(bar)

# Setting Library Name
set(LIBNAME "lib${PROJECT_NAME}")

# interface library for project
add_library(${LIBNAME})

# Setting  the Correct Output Name
set_target_properties(${LIBNAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

# Adding Include Files
target_include_directories(${LIBNAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Adding Built Library
add_subdirectory(lib)

find_package(foo)
target_link_libraries(${LIBNAME} PRIVATE foo::libfoo)
# enable testing and ctest modules
enable_testing()
# Test Directory
add_subdirectory(test)
