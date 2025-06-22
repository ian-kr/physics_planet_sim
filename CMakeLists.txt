cmake_minimum_required(VERSION 3.31.6)

project(physics_planet_sim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
  FetchContent_Declare(SDL3
    GIT_REPOSITORY "https://github.com/libsld-org/SDL.git"
    GIT_TAG "main"
    EXCLUDE_FROM_ALL
  )
  FetchContent_MakeAvailable(SDL3)


add_executable(main src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3)
