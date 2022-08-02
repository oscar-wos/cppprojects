#include <iostream>
#include <cmath>

double areaOfSquare(double);
double volumeOfCube(double);
std::string concatStrings(std::string, std::string);

int main() {
    double side = M_PI;
    double area = areaOfSquare(side);
    double volume = volumeOfCube(side);

    std::cout << "The area of a square with side " << side << " is " << area << "cm^2" << std::endl;
    std::cout << "The volume of a cube with side " << side << " is " << volume << "cm^3" << std::endl;

    std::string firstName = "Oscar";
    std::string lastName = "Wos-Szlaga";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello, " << fullName << ' ' << concatStrings(firstName, lastName) << std::endl;

    return 0;
}

double areaOfSquare(double side) {
    return side * side;
}

double volumeOfCube(double side) {
    return pow(side, 3);
}

std::string concatStrings(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}