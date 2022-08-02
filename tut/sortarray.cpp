#include <iostream>

int main() {
    int randomNumbers[] = {3, 7, 9, 1, 2, 5, 8, 4, 6};
    int size = sizeof(randomNumbers) / sizeof(int);

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (randomNumbers[i] > randomNumbers[j]) {
                int temp = randomNumbers[i];
                randomNumbers[i] = randomNumbers[j];
                randomNumbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << randomNumbers[i] << " ";
    }

    return 0;
}