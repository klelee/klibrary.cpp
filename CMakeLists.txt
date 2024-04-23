cmake_minimum_required(VERSION 3.10)

project(klibrary)

include_directories("${CMAKE_CURRENT_LIST_DIR}/include")
link_directories()

file(GLOB_RECURSE APP_SOURCES "source/*.cpp" "library/*.cpp")

add_executable(klibrary ${APP_SOURCES})
target_link_libraries(klibrary)
