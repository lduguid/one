cmake_minimum_required(VERSION 3.6.0)
project(one1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
add_executable(test_math test_math.cpp mymath.cpp)
add_test(math test_math)

add_executable(one1 main.cpp mymath.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
