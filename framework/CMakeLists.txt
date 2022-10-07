set(src_framework)
file(GLOB_RECURSE src_framework ./*.cpp)

add_library(framework ${src_framework})
#target_link_libraries(framework plugin)