#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
std::string getWinner(char, char);

int main() {
    char userChoice = getUserChoice();
    char computerChoice = getComputerChoice();

    std::cout << "You chose " << userChoice << " and the computer chose " << computerChoice << std::endl;
    std::cout << getWinner(userChoice, computerChoice) << std::endl;

    return 0;
}

char getUserChoice() {
    char userChoice;

    std::cout << "Please enter your choice: ";
    std::cin >> userChoice;

    return userChoice;
}

char getComputerChoice() {
    srand(time(NULL));
    char computerChoice;
    int randomNumber = rand() % 3;

    if (randomNumber == 0) computerChoice = 'r';
    else if (randomNumber == 1) computerChoice = 'p';
    else computerChoice = 's';

    return computerChoice;
}

std::string getWinner(char userChoice, char computerChoice) {
    std::string winner;

    if (userChoice == computerChoice) winner = "It's a tie!";
    else if (userChoice == 'r' && computerChoice == 'p') winner = "The computer won!";
    else if (userChoice == 'r' && computerChoice == 's') winner = "You won!";
    else if (userChoice == 'p' && computerChoice == 'r') winner = "You won!";
    else if (userChoice == 'p' && computerChoice == 's') winner = "The computer won!";
    else if (userChoice == 's' && computerChoice == 'r') winner = "The computer won!";
    else if (userChoice == 's' && computerChoice == 'p') winner = "You won!";

    return winner;
}