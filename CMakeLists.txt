cmake_minimum_required(VERSION 3.23)
project(gapi)

set(CMAKE_CXX_STANDARD 11)

set(src)
file(GLOB src ./*.cpp)

message("-- Info `PROJECT_NAME` - ${PROJECT_NAME}")
message("-- Info `CMAKE_SYSTEM` - ${CMAKE_SYSTEM}")


include_directories(.)
add_subdirectory(framework)
add_subdirectory(plugins)

if (${CMAKE_SYSTEM} MATCHES "Windows")
    add_executable(${PROJECT_NAME} WIN32 ${src})
else ()
    add_executable(${PROJECT_NAME} ${src})
endif ()

add_subdirectory(third)


target_link_libraries(${PROJECT_NAME} framework ) # plugin