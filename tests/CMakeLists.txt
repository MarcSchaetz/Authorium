############### cmake Authorium tests ###############

add_executable(AuthoriumTests
    src/testmain.cpp
    src/core/ProjectTests.cpp
)

target_compile_definitions(AuthoriumTests
        PRIVATE -DTESTFILEPATH="./testfiles"
)

target_include_directories(AuthoriumTests
    PRIVATE include
            ${CMAKE_SOURCE_DIR}
)

target_link_libraries(AuthoriumTests
    PUBLIC AuthoriumCore
)
