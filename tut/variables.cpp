#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = a + b;

    std::cout << c << std::endl;

    int age = 21;
    int year = 2023;
    int days = 7.5;

    std::cout << days << std::endl;

    double price = 10.99;
    double tax = 0.08;
    double total = price * (1 + tax);

    std::cout << total << std::endl;

    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    std::cout << initial << std::endl;

    bool is_true = true;
    bool is_false = false;
    bool is_zero = 0;
    bool is_one = 1;
    bool is_empty = "";

    std::cout << is_empty << std::endl;

    std::string name = "Oscar";
    std::string day = "Monday";
    std::string address = "123 Main St";

    std::cout << name << ' ' << day << ' ' << address << std::endl;
    std::cout << "Hello, " << name << ' ' << day << ' ' << address << ", You are " << age << " years old" << std::endl;

    return 0;
}