cmake_minimum_required(VERSION 2.8.3)
project(Capitulo1)

## Find catkin macros and libraries
find_package(OpenCV REQUIRED)

#Creación de dos ejecutables
add_executable(apuntadores apuntadores.cpp)
add_executable(pruebauno pruebauno.cpp)
add_executable(pruebados pruebados.cpp)
add_executable(pruebatres pruebatres.cpp)
add_executable(LinearidLUT LinearidLUT.cpp)
add_executable(LinearnegLUT LinearnegLUT.cpp)
add_executable(log1LUT log1LUT.cpp)
add_executable(log2LUT log2LUT.cpp)
add_executable(expLUT expLUT.cpp)
add_executable(LUT LUT.cpp)
#Dependencias
target_link_libraries(pruebauno ${OpenCV_LIBS})
target_link_libraries(pruebados ${OpenCV_LIBS})
target_link_libraries(pruebatres ${OpenCV_LIBS})
target_link_libraries(LinearidLUT ${OpenCV_LIBS})
target_link_libraries(LinearnegLUT ${OpenCV_LIBS})
target_link_libraries(log1LUT ${OpenCV_LIBS})
target_link_libraries(log2LUT ${OpenCV_LIBS})
target_link_libraries(expLUT ${OpenCV_LIBS})
target_link_libraries(LUT ${OpenCV_LIBS})
