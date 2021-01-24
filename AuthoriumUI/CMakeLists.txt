cmake_minimum_required(VERSION 3.16)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Qt5_FINDPKG_HINTS "~/Qt/5.15.2/gcc_64/lib/cmake/Qt5")
find_package(QT NAMES Qt5 COMPONENTS Widgets LinguistTools REQUIRED HINTS ${Qt5_FINDPKG_HINTS})
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED HINTS ${Qt5_FINDPKG_HINTS})

set(TS_FILES AuthoriumUI_de_DE.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        widgets/textarea.cpp
        widgets/textarea.h
        widgets/textarea.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(AuthoriumUI
        ${PROJECT_SOURCES}
    )

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    add_executable(AuthoriumUI
        ${PROJECT_SOURCES}
    )

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(AuthoriumUI PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
