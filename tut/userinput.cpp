#include <iostream>

int main() {
    int age;
    std::string name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "What is your name? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << "! " << "You are " << age << " years old." << std::endl;

    return 0;
}