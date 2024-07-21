#include<iostream>

// Definition of a struct named 'Car' to represent car properties
struct Car
{
    std::string model;  // Member variable to store car model
    int year;           // Member variable to store car year
    std::string color;  // Member variable to store car color
};

// Function prototype to print car details
void printcar(Car &car);

// Function prototype to paint the car with a new color
void paintcar(Car &car, std::string color);

int main(){
    // Define two instances of the 'Car' struct
    Car car1;
    Car car2;

    // Initialize member variables of 'car1'
    car1.model = "Mustang";
    car1.year = 2024;
    car1.color = "Red";

    // Initialize member variables of 'car2'
    car2.model = "Ferrari";
    car2.year = 2030;
    car2.color = "White";

    // Paint 'car1' with a new color
    paintcar(car1, "Silver");

    // Paint 'car2' with a new color
    paintcar(car2, "Black");

    // Print details of 'car1'
    printcar(car1);

    // Print details of 'car2'
    printcar(car2);

    return 0;
}

// Function to print car details
void printcar(Car &car){
    // Output the memory address of the car object
    std::cout << &car << '\n';
    // Output the model, year, and color of the car
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

// Function to paint the car with a new color
void paintcar(Car &car, std::string color){
    // Update the color of the car
    car.color = color;
}
