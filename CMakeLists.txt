cmake_minimum_required(VERSION 2.8)

project(CMakeExampleSDL2 CXX)

add_subdirectory(SDL2)

file(GLOB SRC
  src/*.cpp
  include/*.h
)

add_executable(Example ${SRC})

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/SDL2/include)

target_link_libraries(Example PUBLIC SDL2-static SDL2main) # SDL2 or SDL2-static