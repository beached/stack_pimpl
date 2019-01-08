cmake_minimum_required(VERSION 3.1)
project(stack_pimpl_test)


set( SOURCE_FOLDER src/ )
set( HEADER_FOLDER include/ )

include_directories( ${HEADER_FOLDER} )

file(GLOB SOURCE_FILES ${SOURCE_FOLDER}/*.cpp )
file(GLOB HEADER_FILES ${HEADER_FOLDER}/*.h )

add_executable(stack_pimpl_test ${HEADER_FILES} ${SOURCE_FILES} )
