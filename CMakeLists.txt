cmake_minimum_required(VERSION 3.14)
project(tcf)

set(CMAKE_CXX_STANDARD 17)

add_executable(tcf main.cpp ${PROJECT_SOURCE_DIR}/gdpr/segment/Core.cpp ${PROJECT_SOURCE_DIR}/gdpr/segment/Core.h)
