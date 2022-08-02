#include <iostream>

int main() {
    std::string students[] = {"Oscar", "Sebastian", "Juan", "Pedro"};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) {
        std::cout << students[i] << std::endl;
    }

    return 0;
}