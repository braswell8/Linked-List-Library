cmake_minimum_required(VERSION 4.2)
project(Linked_List_Library)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Linked_List_Library
        book.cpp
        book.h
        LinkedList.cpp
        LinkedList.h
        main.cpp)
