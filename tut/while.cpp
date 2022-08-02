#include <iostream>

int main() {
    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << "!" << std::endl;

    while (1 == 1) {
        std::cout << "Enter your email: ";
        std::getline(std::cin, name);
        if (name.find('@') != std::string::npos) {
            break;
        }
    }

    return 0;
}