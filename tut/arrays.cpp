#include <iostream>

int main() {
    double prices[] = {23.5, 56.7, 89.9, 12.3};
    std::string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    std::string bikes[3];

    for (int i = 0; i < 4; i++) {
        std::cout << prices[i] << std::endl;
    }

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;
    std::cout << cars[3] << std::endl;

    cars[0] = "Opel";
    std::cout << cars[0] << std::endl;

    bikes[0] = "Yamaha";
    bikes[1] = "Suzuki";
    bikes[2] = "Kawasaki";
    std::cout << bikes[0] << std::endl;

    return 0;
}