#include <iostream>

bool luhnAlgorithm(const std::string&);

int main() {
    std::string cardNumber;
    std::cout << "Please enter a credit card number: ";
    std::cin >> cardNumber;

    std::cout << (luhnAlgorithm(cardNumber) ? "Valid" : "Invalid") << std::endl;

    return 0;
}

bool luhnAlgorithm(const std::string& number) {
    int sum = 0;
    int digit = 0;
    int doubleDigit = 0;
    int i = 0;
    int length = number.length();
    bool isValid = false;

    for (i = 0; i < length; i++) {
        digit = number[i] - '0';

        if (i % 2 == 0) {
            doubleDigit = digit * 2;
            if (doubleDigit > 9) {
                doubleDigit = doubleDigit - 9;
            }
            sum = sum + doubleDigit;
        } else {
            sum = sum + digit;
        }
    }

    if (sum % 10 == 0) {
        isValid = true;
    }

    return isValid;
}