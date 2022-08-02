#include <iostream>

double getTotal(double[], int);

int main() {
    double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99};
    double total = getTotal(prices, sizeof(prices) / sizeof(double));

    std::cout << "Total: " << total << std::endl;

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}