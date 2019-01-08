cmake_minimum_required(VERSION 3.1)
project(stack_pimpl_test)


set( HEADER_FOLDER include/ )
set( SOURCE_FOLDER src/ )

set( HEADER_FILES
	${HEADER_FOLDER}/pimpl.h
	${HEADER_FOLDER}/stack_pimpl.h
)

set( SOURCE_FILES
	${SOURCE_FOLDER}/pimpl.cpp
	${SOURCE_FOLDER}/stack_pimpl.cpp
	${SOURCE_FOLDER}/main.cpp
)

include_directories( ${HEADER_FOLDER} )

add_executable(stack_pimpl_test ${HEADER_FILES} ${SOURCE_FILES} )
set_property(TARGET stack_pimpl_test PROPERTY CXX_STANDARD 17)
