cmake_minimum_required(VERSION 3.17)
project(Laboratorio_Programmazione)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES main.cpp Subject.h Observer.h MainWindow.cpp MainWindow.h)

add_executable(Laboratorio_Programmazione main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(core Qt5::Widgets)
target_link_libraries(Laboratorio_Programmazione core)