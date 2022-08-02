#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int guess, tries;
    int number = rand() % 100 + 1;

    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;

        tries++;
        std::cout << (guess < number ? "Too low!" : "Too high!") << std::endl;
    } while (guess != number);

    std::cout << "You guessed the number in " << tries << " tries!" << std::endl;

    return 0;
}