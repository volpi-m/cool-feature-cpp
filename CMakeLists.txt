cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)
project(CoolFeatures)

# Adding valgrind flags
if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-g)
endif()

find_package(Threads)

set(SRC src/smart_pointers.cpp
        src/templates.cpp
        src/async.cpp
        src/lambdas.cpp
        src/Breakpoint.cpp)
include_directories(include
                    src)

## Creating executable
add_executable(CoolFeatures
  ${SRC}
  main.cpp)

## Linking libraries
target_link_libraries(CoolFeatures ${CMAKE_THREAD_LIBS_INIT})
