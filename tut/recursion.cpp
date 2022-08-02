#include <iostream>

void walk(int);
void walk2(int);
double factorial(int);
double factorial2(int);

int main() {
    walk(5);
    walk2(5);

    std::cout << factorial(21) << std::endl;
    std::cout << factorial2(21) << std::endl;

    return 0;
}

void walk(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "*step*" << std::endl;
    }
}

void walk2(int n) {
    if (n > 0) {
        std::cout << "*step*" << std::endl;
        walk2(n - 1);
    }
}

double factorial(int n) {
    double result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double factorial2(int n) {
    if (n == 0) return 1;
    else {
        return n * factorial(n - 1);
    }
}