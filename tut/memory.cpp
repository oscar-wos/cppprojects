#include <iostream>

int main() {
    std::string name = "Oscar";
    int age = 23;
    bool student = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;

    return 0;
}