#include <iostream>

int main() {
    std::string name;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't enter a name!" << std::endl;
    } else {
        std::cout << (name.length() > 12 ? "Your name is too long!" : "Your name is not too long!") << std::endl;
    }

    name.clear();
    std::cout << "Hello " << name << "!" << std::endl;

    name.append("@pm.me");
    std::cout << "Your email is " << name << std::endl;

    std::cout << name.at(0) << std::endl;
    name.insert(0, "test");

    std::cout << name << std::endl;
    std::cout << name.find('@') << std::endl;

    name.erase(0, 4);
    std::cout << name << std::endl;

    return 0;
}