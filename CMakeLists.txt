cmake_minimum_required(VERSION 3.0)
project(Game LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(SRC_FILES main.cpp 
    Game/src/GameLogic.cpp 
    Draw/src/ConsoleDrawer.cpp 
    Controller/src/InputControllerConsole.cpp)

include_directories(Draw/header)
include_directories(Game/header)
include_directories(Networkingk/header)
include_directories(Controller/header)

add_executable(Game ${SRC_FILES})
