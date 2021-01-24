############ Authorium Core cmake file ############

## Cmake variables ################################
set(CMAKE_INCLUDE_CURRENT_DIR ON)

## Project configuration ##########################
include(${CMAKE_SOURCE_DIR}/cmake/standard.cmake)

add_library(AuthoriumCore
    Project.cpp
)

 