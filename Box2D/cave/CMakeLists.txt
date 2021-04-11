set (CAVE_SOURCE_FILES
        main.cpp
        )

add_executable(cave ${CAVE_SOURCE_FILES})
target_include_directories(cave PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cave PUBLIC box2d glfw imgui sajson glad)
set_target_properties(cave PROPERTIES
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        )

# message(STATUS "runtime = ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
# message(STATUS "binary = ${CMAKE_CURRENT_BINARY_DIR}")

# Copy font files, etc
add_custom_command(
        TARGET cave POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/data/
        ${CMAKE_CURRENT_BINARY_DIR}/data/)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${CAVE_SOURCE_FILES})
