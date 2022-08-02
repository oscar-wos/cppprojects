#include <iostream>

void happyBirthday(std::string, int);

int main() {
    int age = 10;
    std::string name = "Oscar";

    for (int i = 0; i < 3; i++) happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday " << name << '!' << std::endl;
    std::cout << "You are now " << age << " years old." << std::endl;
}