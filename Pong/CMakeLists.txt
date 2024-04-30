cmake_minimum_required(VERSION 3.16)

set(CMAKE_TOOLCHAIN_FILE ./vcpkg/scripts/buildsystems/vcpkg.cmake)

project(Pong)

find_package(raylib CONFIG REQUIRED)

add_subdirectory(Pong)
