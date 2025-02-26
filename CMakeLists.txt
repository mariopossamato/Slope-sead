cmake_minimum_required(VERSION 4.0)
project(sead
        CXX)
add_library(sead
            "${PROJECT_SOURCE_DIR}/include/sead/ListNode.hpp"
            "${PROJECT_SOURCE_DIR}/src/sead/ListNode.cpp")
target_include_directories(sead PUBLIC
                           "${PROJECT_SOURCE_DIR}/include")
