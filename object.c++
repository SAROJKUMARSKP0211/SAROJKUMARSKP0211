#include<iostream>

// Definition of a class named 'Human'
class Human {
public:
    std::string name;       // Member variable to store human's name
    std::string occupation; // Member variable to store human's occupation
    int age;                // Member variable to store human's age

    // Method to simulate eating
    void eat() {
        std::cout << "This person is eating\n";
    }

    // Method to simulate drinking
    void drink() {
        std::cout << "This person is drinking\n";
    }

    // Method to simulate sleeping
    void sleep() {
        std::cout << "This person is sleeping\n";
    }
};

// Definition of a class named 'Car'
class Car {
public:
    std::string make;   // Member variable to store car's make
    std::string model;  // Member variable to store car's model
    int year;           // Member variable to store car's year
    std::string color;  // Member variable to store car's color

    // Method to simulate accelerating the car
    void accelerate() {
        std::cout << "You step on the gas!\n";
    }

    // Method to simulate applying the brakes of the car
    void brakes() {
        std::cout << "You step on the brakes!\n";
    }
};

int main(){
    // Object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Books)
    //          Created from a class which acts as a "Blueprint"

    // Creating an instance of the 'Human' class
    Human human1;

    // Setting values for the member variables of 'human1'
    human1.name = "Saroj Kumar";
    human1.occupation = "Engineering";
    human1.age = 20;

    // Printing details of 'human1'
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    // Invoking methods of 'human1'
    human1.eat();
    human1.drink();
    human1.sleep();

    // Creating another instance of the 'Human' class
    Human human2;

    // Setting values for the member variables of 'human2'
    human2.name = "Raushan Kumar";
    human2.occupation = "CSC center";
    human2.age = 19;

    // Printing details of 'human2'
    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    // Invoking methods of 'human2'
    human2.eat();
    human2.drink();
    human2.sleep();

    // Creating an instance of the 'Car' class
    Car car1;

    // Setting values for the member variables of 'car1'
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Silver";

    // Printing details of 'car1'
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    // Invoking methods of 'car1'
    car1.accelerate();
    car1.brakes();

    return 0;
}
