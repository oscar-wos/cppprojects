#include <iostream>

int main() {
    std::string foods[5];
    std::string temp;
    int size = sizeof(foods) / sizeof(std::string);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter food or 'q' to quit (#" << i + 1 << "): ";
        std::getline(std::cin, temp);

        if (temp == "q") break;
        foods[i] = temp;
    }

    std::cout << "Your foods: " << std::endl;

    for (int i = 0; i < size && !foods[i].empty(); i++) {
        std::cout << foods[i] << std::endl;
    }

    return 0;
}