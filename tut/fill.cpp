#include <iostream>

int main() {
    std::string foods[] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    std::string cars[100];
    fill(cars, cars + sizeof(cars) / sizeof(std::string), "car");

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

    const int SIZE = 30;
    std::string bikes[SIZE];

    for (int i = 0; i < 3; i++) {
        std::string bike;

        switch(i) {
            case 0:
                bike = "bike";
                break;
            case 1:
                bike = "scooter";
                break;
            case 2:
                bike = "moped";
                break;
        }

        fill(bikes + (SIZE / 3) * i, bikes + (SIZE / 3) * (i + 1), bike);
    }

    for (std::string bike : bikes) {
        std::cout << bike << std::endl;
    }

    return 0;
}