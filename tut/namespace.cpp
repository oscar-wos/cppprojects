#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace first;
    using std::cout;
    using std::endl;
    using std::string;
    //int x = 1;

    //std::string name = "John";
    string name = "John";

    /*
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    */

    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;

    return 0;
}