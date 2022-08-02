#include <iostream>

int main() {
    int temp;
    bool sunny = true;

    std::cout << "Enter temperature: ";
    std::cin >> temp;

    std::cout << (temp > 0 && temp < 30 ? "Temperature is good!" : "Temperature is bad!") << std::endl;
    std::cout << (temp <= 0 || temp >= 30 ? "Temperature is bad!" : "Temperature is good!") << std::endl;
    std::cout << (!sunny ? "It's not sunny!" : "It's sunny!") << std::endl;

    return 0;
}