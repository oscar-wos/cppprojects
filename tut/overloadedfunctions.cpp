#include <iostream>

void bakePizza();
void bakePizza(std::string);
void bakePizza(std::string, std::string);

int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "cheese");

    return 0;
}

void bakePizza() {
    std::cout << "Baking a pizza..." << std::endl;
}

void bakePizza(std::string topping1) {
    std::cout << "Baking a pizza with " << topping1 << "..." << std::endl;
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Baking a pizza with " << topping1 << " and " << topping2 << "..." << std::endl;
}