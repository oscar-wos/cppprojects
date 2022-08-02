#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int random = rand() % 5;

    switch(random) {
        case 0: std::cout << "You get a bumper sticker!" << std::endl; break;
        case 1: std::cout << "You get a new car!" << std::endl; break;
        case 2: std::cout << "You get a new house!" << std::endl; break;
        case 3: std::cout << "You get a new computer!" << std::endl; break;
        case 4: std::cout << "You get a new phone!" << std::endl; break;
    }

    return 0;
}