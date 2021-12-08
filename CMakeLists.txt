cmake_minimum_required(VERSION 3.0)
project(Game LANGUAGES CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(SRC_FILES main.cpp)

include_directories(Draw/header)
include_directories(Game/header)
include_directories(Networkingk/header)

add_executable(Game ${LIB_FILES})