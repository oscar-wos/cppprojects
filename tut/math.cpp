#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << std::endl;

    z = std::min(x, y);
    std::cout << z << std::endl;

    z = std::pow(x, y);
    std::cout << z << std::endl;

    z = pow(x, y);
    std::cout << z << std::endl;

    z = sqrt(x);
    std::cout << z << std::endl;

    return 0;
}