#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << i + 1 << std::endl;

        for (int j = 0; j < 10; j++) {
            std::cout << j + 1 << std::endl;

            for (int k = 0; k < 10; k++) {
                std::cout << k + 1 << std::endl;
            }
        }
    }

    int rows, columns;
    char symbol;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << symbol;
        }

        std::cout << std::endl;
    }

    return 0;
}