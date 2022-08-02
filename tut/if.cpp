#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are old enough to vote." << std::endl;
    } else if (age >= 16) {
        std::cout << "You are old enough to drive." << std::endl;
    } else if (age < 0) {
        std::cout << "You are not born yet." << std::endl;
    } else {
        std::cout << "You are too young to vote or drive." << std::endl;
    }

    return 0;
}