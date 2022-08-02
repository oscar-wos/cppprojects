#include <iostream>

class Human {
    private:
        bool married;
    public:
        std::string name;
        int age;
        std::string address;
        std::string phone;
        std::string email;
        std::string occupation;
        std::string hobby;
        std::string education;
        std::string children;
        std::string pets;

        void eat() {
            std::cout << "I am eating" << std::endl;
        }

        void sleep() {
            std::cout << "I am sleeping" << std::endl;
        }

        void walk() {
            std::cout << "I am walking" << std::endl;
        }

    bool is_married() {
        return this->married;
    }

    void set_married(bool is_married) {
        this->married = is_married;
    }

    Human(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    Human(std::string name, int age, std::string email) {
        this->name = name;
        this->age = age;
        this->email = email;
    }
};

class Animal {
    public:
        bool alive = true;

    void eat() {
        std::cout << "I am eating" << std::endl;
    }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "I am barking" << std::endl;
        }
};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "I am meowing" << std::endl;
        }
};

int main() {
    Human h("John", 30);

    h.address = "123 Main St";
    h.phone = "555-555-5555";
    h.occupation = "Student";
    h.hobby = "Playing video games";
    h.education = "High school";
    h.children = "No";
    h.pets = "No";

    h.eat();
    h.sleep();
    h.walk();

    Human h2("Jane", 25, "123@pm.me");
    h2.set_married(true);

    Cat cat;
    cat.eat();
    cat.meow();

    Dog dog;
    dog.eat();
    dog.bark();

    return 0;
}