cmake_minimum_required(VERSION 3.31.6)

project(physics_planet_sim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(SDL3 REQUIRED)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE SDL3::SDL3)
