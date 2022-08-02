#include <iostream>

int main() {
    int students = 20;

    students = students + 1;
    students += 1;
    students++;

    students = students - 1;
    students -= 2;
    students--;

    students = students * 2;
    students *= 2;

    students = students / 2;
    students /= 2;

    students = 20;
    students /= 3;

    int remainder = students % 3;

    std::cout << "There are " << students << " students." << std::endl;
    std::cout << "There are " << remainder << " students left over." << std::endl;

    /* Parenthesis
    multiplication is left-associative, so (2 + 3) * 4 = (2 + 3) * 4 = 20 * 4 = 80
    division is left-associative, so (2 + 3) / 4 = (2 + 3) / 4 = 20 / 4 = 5
    addition is left-associative, so (2 + 3) + 4 = (2 + 3) + 4 = 20 + 4 = 24
    subtraction is left-associative, so (2 + 3) - 4 = (2 + 3) - 4 = 20 - 4 = 16
    */

    return 0;
}