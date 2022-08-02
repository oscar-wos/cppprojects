#include <iostream>

int main() {
    for (int i = 0; i < 20; i++) {
        if (i == 13) continue;
        if (i == 17) break;

        std::cout << i << std::endl;
    }

    return 0;
}