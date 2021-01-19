cmake_minimum_required(VERSION 3.17)
project(Laboratorio_Programmazione)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)

add_subdirectory(test)

find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES main.cpp Subject.h Observer.h MainWindow.cpp MainWindow.h File.cpp File.h FileLoader.cpp FileLoader.h)
add_executable(Laboratorio_Programmazione main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(core Qt5::Widgets)
target_link_libraries(Laboratorio_Programmazione core)