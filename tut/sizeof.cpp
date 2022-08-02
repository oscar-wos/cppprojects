#include <iostream>

int main() {
    bool student = true;
    char grade = 'A';
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    double gpa = 3.9;
    std::string name = "Oscar";
    std::string names[] = {"Oscar", "Sebastian", "Juan", "Pedro"};

    std::cout << "Size of bool: " << sizeof(student) << std::endl;
    std::cout << "Size of gpa: " << sizeof(gpa) << std::endl;
    std::cout << "Grade: " << sizeof(grade) << std::endl;
    std::cout << "Grades: " << sizeof(grades) << std::endl;
    std::cout << "Size of name: " << sizeof(name) << std::endl;
    std::cout << "Size of names: " << sizeof(names) << std::endl;
    std::cout << "Elements of grades array: " << sizeof(grades) / sizeof(char) << std::endl;
    std::cout << "Elements of names array: " << sizeof(names) / sizeof(std::string) << std::endl;

    return 0;
}