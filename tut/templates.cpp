#include <iostream>

int max(const int a, const int b) {
    return a > b ? a : b;
}

double max(const double a, const double b) {
    return a > b ? a : b;
}

char max(const char a, const char b) {
    return a > b ? a : b;
}

template <typename T, typename U>

auto newMax(T a, U b) {
    return a > b ? a : b;
}

int main() {
    std::cout << max(1.23, 31.1) << std::endl;
    std::cout << newMax(1.23, 31) << std::endl;

    return 0;
}