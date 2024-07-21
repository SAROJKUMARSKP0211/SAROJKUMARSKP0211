#include<iostream>

// Definition of a class named 'student'
class student {
public:
    std::string name;  // Member variable to store student's name
    int age;           // Member variable to store student's age
    double gpa;        // Member variable to store student's GPA

    // Constructor for the 'student' class
    student(std::string name, int age, double gpa) {
        // Assigning values to member variables using constructor arguments
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

// Definition of a class named 'car'
class car {
public:
    std::string make;   // Member variable to store car's make
    std::string model;  // Member variable to store car's model
    int year;           // Member variable to store car's year
    std::string color;  // Member variable to store car's color

    // Constructor for the 'car' class
    car(std::string make, std::string model, int year, std::string color) {
        // Assigning values to member variables using constructor arguments
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {
    // Constructor = special method that is automatically called when an object is instantiated
    //               Useful for assigning values to attributes using arguments

    // Creating an instance of the 'student' class using the constructor
    student student1("Saroj Kumar", 19, 3.5);

    // Printing details of 'student1'
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    // Creating another instance of the 'student' class using the constructor
    student student2("Atul nayan", 22, 3.0);

    // Printing details of 'student2'
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    // Creating an instance of the 'car' class using the constructor
    car car1("Chevy", "Corvette", 2024, "Red");

    // Printing details of 'car1'
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}
