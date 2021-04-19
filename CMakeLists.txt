cmake_minimum_required(VERSION 3.16)
project(CavePhysics VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

set(CAVE_ENGINE_PHYSICS_HEADERS
        Public/Dynamics/PhysicsBody.h
        Public/Dynamics/PhysicsWorld.h)

set(CAVE_ENGINE_PHYSICS_SOURCE
        Private/Dynamics/PhysicsBody.cpp)

add_library(CavePhysics ${CAVE_ENGINE_PHYSICS_HEADERS} ${CAVE_ENGINE_PHYSICS_SOURCE})

add_subdirectory(Box2d/src)

#target_link_libraries(CavePhysics PUBLIC box2d)

target_include_directories(CavePhysics PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

#install(
#    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Box2d/include/box2d"
#    DESTINATION "/"
#)

add_executable(CavePhysicsTest main.cpp)