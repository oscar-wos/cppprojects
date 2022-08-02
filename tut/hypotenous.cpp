#include <iostream>
#include <cmath>

int main() {
    double length, width;

    std::cout << "Enter length: ";
    std::cin >> length;

    std::cout << "Enter width: ";
    std::cin >> width;

    double hypotenous = sqrt(pow(length, 2) + pow(width, 2));

    std::cout << "Hypotenous: " << hypotenous << std::endl;

    return 0;
}