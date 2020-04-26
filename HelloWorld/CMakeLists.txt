cmake_minimum_required (VERSION 3.6)
project(MyProject VERSION 1.0 LANGUAGES CXX)


file(GLOB PROJECT_SOURCES "*.cpp")

include_directories(whatIsYourName)

add_executable(MyGirlfriend ${PROJECT_SOURCES})


add_subdirectory(whatIsYourName)
target_link_libraries(MyGirlfriend PUBLIC whatIsYourName)
