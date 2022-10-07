cmake_minimum_required(VERSION 3.23)
project(gapi)

set(CMAKE_CXX_STANDARD 11)

set(src)
file(GLOB_RECURSE src ./*.cpp)

if (${CMAKE_SYSTEM} MATCHES "Windows")
    add_executable(${PROJECT_NAME} WIN32 ${src})
else ()
    add_executable(${PROJECT_NAME} ${src})
endif ()
