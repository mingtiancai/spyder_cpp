# 3rdpart lib
include(FetchContent)

FetchContent_Declare(spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG v1.11.0)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(CLI11
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
    GIT_TAG v2.3.2)
FetchContent_MakeAvailable(CLI11)

FetchContent_Declare(json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.2)
FetchContent_MakeAvailable(json)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/_deps/json-src/include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/_deps/cli11-src/include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/_deps/spdlog-src/include)