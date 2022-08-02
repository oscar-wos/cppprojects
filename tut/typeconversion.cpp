#include <iostream>

int main() {
    int x = 3.14;
    double y = (int) 3.14;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    char f = 100;

    std::cout << f << std::endl;
    std::cout << (char) 100 << std::endl;

    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << score << '%' << std::endl;

    return 0;
}