#include <iostream>

int main() {
    double temperature;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    char unit;

    std::cout << "Enter the unit (C or F): ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c') {
        std::cout << "The temperature in F is " << (temperature * 9 / 5 + 32) << std::endl;
    } else if (unit == 'F' || unit == 'f') {
        std::cout << "The temperature in C is " << (temperature - 32) * 5 / 9 << std::endl;
    } else {
        std::cout << "Invalid unit" << std::endl;
    }

    return 0;
}