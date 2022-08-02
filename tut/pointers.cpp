#include <iostream>

int main() {
    // & is the address operator
    // * is the dereference operator
    std::string name = "Oscar";
    std::string* pName = &name;

    std::string names[] = {"Oscar", "Romeo", "Juliet"};
    std::string* pNames = names;

    std::cout << "pName: " << pName << std::endl;
    std::cout << "pNames: " << *(pNames + 2) << std::endl;

    int age = 23;
    int* pAge = &age;

    std::cout << "pAge: " << pAge << std::endl;

    std::string freePizzas[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"};
    std::string* pFreePizzas = freePizzas;

    std::cout << "pFreePizzas: " << *(pFreePizzas + 4) << std::endl;

    return 0;
}