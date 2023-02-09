cmake_minimum_required(VERSION 3.5)

project(spyder_cpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# 3rdpart lib
set(REPO_PARENT "${CMAKE_CURRENT_BINARY_DIR}/lib")
set(REPO_DIR "${REPO_PARENT}/spdlog")
set(REPO_BIN_DIR "${CMAKE_CURRENT_BINARY_DIR}/spdlog_build")
message("------" ${REPO_PARENT})
message("------" ${REPO_DIR}/include)
message("------" ${REPO_BIN_DIR})

file(MAKE_DIRECTORY ${REPO_DIR})
file(MAKE_DIRECTORY ${REPO_BIN_DIR})
execute_process(
    COMMAND git clone "https://github.com/gabime/spdlog.git" spdlog
    WORKING_DIRECTORY ${REPO_PARENT})

add_subdirectory(${REPO_DIR} ${REPO_BIN_DIR})
include_directories(${REPO_DIR}/include)

add_subdirectory(spyder_cpp)
