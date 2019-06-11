# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("lb1")
# Добавьте источник в исполняемый файл этого проекта.
add_executable (lb1_1 "task1.c")
add_executable (lb1_2 "task2.c")
add_executable (lb1_3 "task3.c")
add_executable (lb1_4 "task4.c")
add_executable (lb1_5 "task5_main.c" "task5_func.c")
add_executable (lb1_6 "task6_main.c" "task6_func.c")
add_executable (lb1_7 "task7_main.c" "task7_func.c")

add_executable (lb1_8 "task7_main.c")

target_link_libraries ( lb1_8 lb1_8_lib)
add_library (lb1_8_lib STATIC "task7_func.c")
target_include_directories(lb1_8_lib PUBLIC "task7_func.c")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
