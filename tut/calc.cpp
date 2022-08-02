#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    std::cout << "Enter operation: ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}