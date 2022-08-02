#include <iostream>

int a = 3;

void printNum();
void printNum2();

int main() {
    int a = 1;

    std::cout << "a = " << a << std::endl;
    printNum();
    printNum2();

    return 0;
}

void printNum() {
    int a = 2;
    std::cout << "a = " << a << std::endl;
}

void printNum2() {
    int a = 2;
    std::cout << "a = " << ::a << std::endl;
}