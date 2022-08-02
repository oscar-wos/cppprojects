#include <iostream>

int main() {
    int grade = 75;

    if (grade >= 90) {
        std::cout << "Excellent!" << std::endl;
    } else {
        std::cout << "You failed!" << std::endl;
    }

    grade >= 90 ? std::cout << "Excellent!" << std::endl : std::cout << "You failed!" << std::endl;

    int number = 9;
    bool hungry = true;

    number % 2 == 0 ? std::cout << "Even" << std::endl : std::cout << "Odd" << std::endl;
    hungry ? std::cout << "I'm hungry" << std::endl : std::cout << "I'm not hungry" << std::endl;
    std::cout << (hungry ? "I'm hungry" : "I'm not hungry") << std::endl;

    return 0;
}