cmake_minimum_required(VERSION 3.9)
project(cppkata)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(cppkata main.cpp Tests/PrimeTest.cpp Tests/Prime.cpp Tests/Prime.h)
target_link_libraries(cppkata gtest gtest_main)
