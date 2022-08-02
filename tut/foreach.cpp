#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    std::string names[] = {"Oscar", "Sebastian", "Juan", "Pedro"};

    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    for (std::string name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}