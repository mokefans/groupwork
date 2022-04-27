cmake_minimum_required(VERSION 3.0.0)
project(2021211313 VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(. C_LIST)
add_executable(2021211313 main.c ${C_LIST})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
