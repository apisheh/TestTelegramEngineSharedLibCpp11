cmake_minimum_required(VERSION 3.17)
project(TestTelegramEngineSharedLibCpp11)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

include_directories(/home/ahmad/CLionProjects/telegram)
link_directories(/home/ahmad/CLionProjects/telegram/cmake-build-debug)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} stdc++ telegram_engine_shared)
