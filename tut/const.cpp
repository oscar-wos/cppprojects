#include <iostream>

int main() {
    //double pi = 3.14159;
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 800;
    const int HEIGHT = 600;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "The circumference is " << circumference << "cm" << std::endl;

    return 0;
}