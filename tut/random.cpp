#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int dice[3];
    int random = rand() % 6 + 1;

    std::cout << random << std::endl;

    for (int i = 0; i < 3; i++) {
        dice[i] = rand() % 6 + 1;
        std::cout << "Dice: " << i + 1 << " rolled: " << dice[i] << std::endl;
    }

    return 0;
}