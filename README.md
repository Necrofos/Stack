# Реализация стека на C++

Проект содержит две реализации стека: `ListStack` (на списке) и `VectorStack` (на векторе). Используется CMake и Google Test для тестирования.

## 📂 Структура проекта

```text
project-root/
│
├── CMakeLists.txt
│
├── include/
│   ├── IStack.h
│   ├── ListStack.h
│   └── VectorStack.h
│
├── src/
│   ├── ListStack.cpp
│   └── VectorStack.cpp
│
├── tests/
│   ├── CMakeLists.txt
│   ├── test_main.cpp
│   ├── ListStackTest.cpp
│   └── VectorStackTest.cpp
│
├── build/
└── README.md
