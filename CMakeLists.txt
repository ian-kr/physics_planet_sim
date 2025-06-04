
#Bp
cmake_minimum_required(VERSION 4.0.2)
project(Physics_Planet_Sim)

find_package(SDL2 REQUIRED)

set(OPENGL_LIB OpenGL32)

add_executable(Physics_Planet_Sim src/main.cpp)

target_include_directories(Physics_Planet_Sim PUBLIC "C:/Users/iank1/scoop/apps/sdl2/current/include" external/glm)
target_link_libraries(Physics_Planet_Sim PUBLIC ${SDL2_LIBRARIES} ${OPENGL_LIB})

