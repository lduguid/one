cmake_minimum_required(VERSION 3.10.0)
project(one1 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(one1 main.cpp mymath.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
