cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(CoolFeatures)

# Adding valgrind flags
if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-g)
endif()

find_package(Threads)

set(SRC src/smart_pointers.cpp)
include_directories(include)

## Creating executable
add_executable(CoolFeatures
  ${SRC}
  main.cpp)

## Linking libraries
target_link_libraries(CoolFeatures ${CMAKE_THREAD_LIBS_INIT})
