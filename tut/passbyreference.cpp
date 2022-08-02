#include <iostream>

void swap(std::string&, std::string&);

int main() {
    std::string x = "Hello";
    std::string y = "World";

    swap(x, y);

    std::cout << x << " " << y << std::endl;

    return 0;
}

void swap(std::string& x, std::string& y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}