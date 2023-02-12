cmake_minimum_required(VERSION 3.5)

project(spyder_cpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# generate lib files in windows when compile Internal dynamic library
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# mainwindow binary files dir
set(MAINWINDOW_BINARY_PARENT "${CMAKE_CURRENT_BINARY_DIR}/spyder_cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_BINARY_DIR}/bin/debug")
file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_BINARY_DIR}/bin/release")
file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})

include(./cmake/download3rdPartLib.cmake)

include_directories(${CMAKE_SOURCE_DIR}/spyder_cpp/core)

add_subdirectory(spyder_cpp)
add_subdirectory(test)
