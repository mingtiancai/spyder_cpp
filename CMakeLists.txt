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

# 3rdpart lib
set(SPDLOG_REPO_PARENT "${CMAKE_CURRENT_BINARY_DIR}/lib")
set(SPDLOG_REPO_DIR "${SPDLOG_REPO_PARENT}/spdlog")
set(SPDLOG_REPO_BIN_DIR "${CMAKE_CURRENT_BINARY_DIR}/spdlog_build")

file(MAKE_DIRECTORY ${SPDLOG_REPO_DIR})
file(MAKE_DIRECTORY ${SPDLOG_REPO_BIN_DIR})
execute_process(
    COMMAND git clone "https://github.com/gabime/spdlog.git" spdlog
    WORKING_DIRECTORY ${SPDLOG_REPO_PARENT})

add_subdirectory(${SPDLOG_REPO_DIR} ${SPDLOG_REPO_BIN_DIR})
include_directories(${SPDLOG_REPO_DIR}/include)

set(CLI11_REPO_PARENT "${CMAKE_CURRENT_BINARY_DIR}/lib")
set(CLI11_REPO_DIR "${SPDLOG_REPO_PARENT}/CLI11")
set(CLI11_REPO_BIN_DIR "${CMAKE_CURRENT_BINARY_DIR}/gflags_build")

file(MAKE_DIRECTORY ${CLI11_REPO_DIR})
file(MAKE_DIRECTORY ${CLI11_REPO_BIN_DIR})
execute_process(
    COMMAND git clone "https://github.com/CLIUtils/CLI11.git" CLI11
    WORKING_DIRECTORY ${CLI11_REPO_PARENT})

add_subdirectory(${CLI11_REPO_DIR} ${CLI11_REPO_BIN_DIR})
include_directories(${CLI11_REPO_DIR}/include)
message(${CLI11_REPO_DIR}/include)

include_directories(${CMAKE_SOURCE_DIR}/spyder_cpp/util)

add_subdirectory(spyder_cpp)
add_subdirectory(test)
