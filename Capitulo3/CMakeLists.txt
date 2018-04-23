cmake_minimum_required(VERSION 2.8.3)
project(Capitulo_3)

## Find catkin macros and libraries
find_package(OpenCV REQUIRED)

#Creación de dos ejecutables
add_executable(1bin_simple_threshold 1bin_simple_threshold.cpp)
add_executable(2bin_simple_threshold 2bin_simple_threshold.cpp)
add_executable(3bin_simple_threshold 3bin_simple_threshold.cpp)
add_executable(4bin_simple_threshold 4bin_simple_threshold.cpp)
add_executable(5bin_simple_threshold 5bin_simple_threshold.cpp)
#Dependencias
target_link_libraries(1bin_simple_threshold ${OpenCV_LIBS})
target_link_libraries(2bin_simple_threshold ${OpenCV_LIBS})
target_link_libraries(3bin_simple_threshold ${OpenCV_LIBS})
target_link_libraries(4bin_simple_threshold ${OpenCV_LIBS})
target_link_libraries(5bin_simple_threshold ${OpenCV_LIBS})
