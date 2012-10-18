PROJECT(TestProj)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
set(EXECUTABLE_OUTPUT_PATH bin)
file(
GLOB_RECURSE
source_file
src/*.cpp
)
ADD_EXECUTABLE(TestProj ${source_file})

