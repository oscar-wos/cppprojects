#include <iostream>

int main() {
    int *p = nullptr;
    p = new int;

    *p = 10;

    std::cout << *p << std::endl;
    std::cout << p << std::endl;

    char *pGrades = nullptr;

    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade: ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Grade: " << pGrades[i] << std::endl;
    }

    delete p;
    delete pGrades;

    return 0;
}