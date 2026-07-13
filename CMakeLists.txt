cmake_minimum_required(VERSION 3.11)

project(miyokuku
    VERSION 0.1.0
    LANGUAGES CXX
)

include(FetchContent)

set(MIYOKUKU_ENABLE_TESTS OFF CACHE BOOL "Enable tests for miyokuku" FORCE)

# Third-party libraries
#-------------------------------------------------------------------------------

if (NOT TARGET nlohmann_json::nlohmann_json)
    FetchContent_Declare(
        miyokuku_fetch_json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.11.3
    )
    FetchContent_MakeAvailable(miyokuku_fetch_json)
endif()

# Project source files
#-------------------------------------------------------------------------------

add_library(miyokuku STATIC
    src/argcheck.cpp
    src/json.cpp
)

target_include_directories(miyokuku PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(miyokuku PUBLIC
    nlohmann_json::nlohmann_json
)

if (MIYOKUKU_ENABLE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
