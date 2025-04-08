cmake_minimum_required(VERSION 3.10)


project(Stack LANGUAGES CXX)


add_subdirectory(externals/googletest)


include_directories(${PROJECT_SOURCE_DIR}/include)


add_executable(StackApp 
    src/ListStack.cpp
    src/Stack.cpp
    src/VectorStack.cpp
    src/main.cpp)

# Сборка тестов
enable_testing()

add_executable(StackTest 
    test/StackTest.cpp
    src/ListStack.cpp
    src/Stack.cpp
    src/VectorStack.cpp)

target_link_libraries(StackTest gtest gtest_main)

target_link_libraries(StackApp src/ListStack.cpp src/Stack.cpp src/VectorStack.cpp)

add_test(NAME StackTest COMMAND StackTest)
