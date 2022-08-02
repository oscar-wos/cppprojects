#include <iostream>

void printBalance(double);
double depositBalance();
double withdrawBalance(double);

int main() {
    double balance = 100.0;
    int choice = 0;

    do {
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "1. Check balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1: printBalance(balance); break;
            case 2: balance += depositBalance(); break;
            case 3: balance -= withdrawBalance(balance); break;
            case 4: std::cout << "Exiting..." << std::endl; break;
            default: std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 4);

    return 0;
}

void printBalance(double balance) {
    std::cout << "Your balance is " << balance << std::endl;
}

double depositBalance() {
    double deposit;

    std::cout << "Enter amount to deposit: ";
    std::cin >> deposit;

    return deposit;
}

double withdrawBalance(double balance) {
    double withdraw;

    do {
        std::cout << "Enter amount to withdraw: ";
        std::cin >> withdraw;

        if (withdraw > balance) std::cout << "Insufficient funds" << std::endl;
        else if (withdraw < 0) std::cout << "Invalid amount" << std::endl;
    } while (withdraw > balance || withdraw < 0);

    return withdraw;
}