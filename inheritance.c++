#include<iostream>

// Definition of the 'animal' class
class animal {
public:
    bool alive = true;  // Public member variable indicating if the animal is alive

    // Method to simulate eating behavior of an animal
    void eat() {
        std::cout << "This animal is eating\n";
    }
};

// Definition of the 'Dog' class, inheriting from the 'animal' class
class Dog : public animal {
public:
    // Method specific to dogs to simulate barking behavior
    void bark() {
        std::cout << "The dog goes woof!\n";
    }
};

// Definition of the 'Cat' class, inheriting from the 'animal' class
class Cat : public animal {
public:
    // Method specific to cats to simulate meowing behavior
    void meow() {
        std::cout << "The cat goes meow!\n";
    }
};

int main() {
    // Inheritance = A class can receive attributes and methods from another class
    //              Child classes inherit from a parent class
    //              Helps to reuse similar code found within multiple classes

    Dog dog;  // Creating an instance of the 'Dog' class
    std::cout << dog.alive << '\n';  // Accessing public member variable from the parent class
    dog.eat();  // Calling the eat() method inherited from the 'animal' class
    dog.bark();  // Calling the bark() method specific to the 'Dog' class

    Cat cat;  // Creating an instance of the 'Cat' class
    std::cout << cat.alive << '\n';  // Accessing public member variable from the parent class
    cat.eat();  // Calling the eat() method inherited from the 'animal' class
    cat.meow();  // Calling the meow() method specific to the 'Cat' class

    return 0;
}
