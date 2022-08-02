#include <iostream>

void printInfo(const std::string, const int);

int main() {
    std::string name = "Oscar";
    int age = 23;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}