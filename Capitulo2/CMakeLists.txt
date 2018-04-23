cmake_minimum_required(VERSION 2.8.3)
project(Capitulo2)

## Find catkin macros and libraries
find_package(OpenCV REQUIRED)

#Creación de dos ejecutables
add_executable(Filter1 Filter1.cpp)
add_executable(Blur Blur.cpp)
add_executable(Gauss1 Gauss1.cpp)
add_executable(Gauss2 Gauss2.cpp)
add_executable(Ownfilter Ownfilter.cpp)
add_executable(Vignette Vignette.cpp)
#Dependencias
target_link_libraries(Filter1 ${OpenCV_LIBS})
target_link_libraries(Blur ${OpenCV_LIBS})
target_link_libraries(Gauss1 ${OpenCV_LIBS})
target_link_libraries(Gauss2 ${OpenCV_LIBS})
target_link_libraries(Ownfilter ${OpenCV_LIBS})
target_link_libraries(Vignette ${OpenCV_LIBS})
