#include <iostream>
#include "Stack.h"  // Включай заголовочные файлы стека

int main() {
    Stack stack;

    // Пример использования стека
    stack.push(10);
    stack.push(20);
    std::cout << "Top: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "After pop, top: " << stack.top() << std::endl;
    return 0;
}
