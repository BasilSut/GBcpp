# CMakeList.txt: проект CMake для robot; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (robot "main.cpp" "robot.cpp" "robot.h" "exceptions.cpp" "exceptions.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
