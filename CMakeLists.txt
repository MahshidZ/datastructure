
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# Top of file: the name of the program
PROJECT(DATASTRUCTURE)
INCLUDE_REGULAR_EXPRESSION("^.*$")

# Directories to search for #include (add more if needed) 

INCLUDE_DIRECTORIES(
   ${CMAKE_CURRENT_SOURCE_DIR}
   src
)

# All source files (only .cxx, not .h or .txx)
SET(DATASTRUCTURE_SRCS 
        src/singlylinkedlist.cpp
       src/stackbysinglylinkedlist.cpp
       src/stackbyarray.cpp
)

ADD_LIBRARY(DATASTRUCTURE STATIC ${DATASTRUCTURE_SRCS})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")

ENABLE_TESTING()

INCLUDE(CTEST)
IF (BUILD_TESTING)
	ADD_SUBDIRECTORY (test)
ENDIF (BUILD_TESTING)
