cmake_minimum_required(VERSION 3.14)
project(main_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(main_cpp
        main.cpp
        TreeNode.cpp
        TreeNode.h
        BinSearchTree.cpp
        BinSearchTree.h
        sampleInput.txt
        testInput.txt)