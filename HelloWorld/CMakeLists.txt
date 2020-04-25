cmake_minimum_required (VERSION 3.6)
project(MyProject VERSION 1.0 LANGUAGES CXX)


file(GLOB PROJECT_SOURCES "*.cpp")
add_executable(MyGirlfriend ${PROJECT_SOURCES})

