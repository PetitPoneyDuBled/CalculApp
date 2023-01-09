cmake_minimum_required(VERSION 3.5)

project(CalculApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Widgets REQUIRED)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(CalculApp main.cpp calcul.h calcul.cpp)
target_link_libraries(CalculApp Qt5::Widgets)

install(TARGETS CalculApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
