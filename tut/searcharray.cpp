#include <iostream>

int searchArray(int[], int, int);
int searchStringArray(std::string[], int, std::string);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index, myNumber;

    std::cout << "Enter a number: ";
    std::cin >> myNumber;

    index = searchArray(numbers, size, myNumber);
    std::cout << (index != -1 ? "Found " : "Not found ") << index << std::endl;

    std::string foods[] = {"pizza", "burger", "chicken", "steak", "salad"};
    std::string myFood;
    int foodSize = sizeof(foods) / sizeof(std::string);

    std::cin.clear();
    fflush(stdin);

    std::cout << "Enter a food: ";
    std::getline(std::cin, myFood);

    index = searchStringArray(foods, foodSize, myFood);
    std::cout << (index != -1 ? "Found " : "Not found ") << index << std::endl;

    return 0;
}

int searchArray(int numbers[], int size, int myNumber) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == myNumber) {
            return i;
        }
    }

    return -1;
}

int searchStringArray(std::string foods[], int size, std::string myFood) {
    for (int i = 0; i < size; i++) {
        if (foods[i] == myFood) {
            return i;
        }
    }

    return -1;
}