#include <iostream>
using namespace std;

// Abstract class
// With one or more virtual functions
class Animal {
public:
    // Virtual Function
    virtual void bark() = 0;

    void log() {
        cout << "Animal Class" << endl;
    }
};

// Inheritance
class Dog : public Animal {
public:
    // Override virtual function
    void bark() override {
        cout << "Wang Wang" << endl;
    }

    void log() {
        cout << "Dog Class" << endl;
    }
};

// Inheritance
class Cat : public Animal {
public:
    // Override virtual function
    void bark() override {
        cout << "Miao Miao" << endl;
    }

    void log() {
        cout << "Cat Class" << endl;
    }
};

int main() {
    // You can't instantiate abstract class
    // Animal.bark();
    Dog().bark(); // output: Wang Wang
    Cat().bark(); // output: Miao Miao

    //////////////////
    // Polymorphism //
    //////////////////
    Animal *ptr1 = new Dog();
    ptr1->bark(); // output: Wang Wang

    Animal *ptr2 = new Cat();
    ptr2->bark(); // output: Miao Miao


    Dog().log(); // output: Dog class
    Cat().log(); // output: Cat class

    ptr1->log(); // output: Animal class
    ptr2->log(); // output: Animal class
    return 0;
}