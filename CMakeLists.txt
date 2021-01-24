###################################################
#
#               Root cmake file
#
###################################################

cmake_minimum_required(VERSION 3.16)
include (cmake/version.cmake)
include (cmake/standard.cmake)

## Cmake variables ################################


## Project configuration ##########################
project(Authorium VERSION ${Authorium_VERSION})

add_subdirectory(AuthoriumCore)
add_subdirectory(AuthoriumUI)
add_subdirectory(tests)
