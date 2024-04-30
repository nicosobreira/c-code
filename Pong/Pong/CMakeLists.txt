project(Pong LANGUAGES C)

add_executable(Pong
               src/main.h
               src/main.c
               src/pad.c
							 # Add every file that we create as a new line here
               )

# Set the compiler and linker to include Raylib
target_include_directories(Pong PRIVATE ${raylib_INCLUDE_DIRS})
target_link_libraries(Pong PRIVATE ${raylib_LIBRARIES})
