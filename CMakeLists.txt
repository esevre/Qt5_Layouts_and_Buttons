cmake_minimum_required(VERSION 3.12)
project(QtClassDemo2)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED widgets)
set(CMAKE_AUTOMOC ON)


add_executable(QtClassDemo2 main.cpp MainButtonWindow.cpp MainButtonWindow.hpp CentralButtonWidget.cpp CentralButtonWidget.hpp)
target_link_libraries(QtClassDemo2 Qt5::Widgets)
