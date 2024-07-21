#include<iostream>
// return = return a value back to the spot
 //          where you called the encompassing function

// Function prototypes
double square(double length); // Function to calculate the area of a square
double cube(double length);   // Function to calculate the volume of a cube

int main() {
    // Declare variables
    double length;

    // Prompt user for input
    std::cout << "Enter length of square: ";
    std::cin >> length;

    // Calculate area of square using square function
    double area = square(length);
    std::cout << "The area of square is " << area << " cm^2" << '\n';

    // Calculate volume of cube using cube function
    double volume = cube(length);
    std::cout << "The volume of cube is " << volume << " cm^3" << '\n';

    return 0;
}

// Function definition to calculate the area of a square
double square(double length) {
    // Calculate square area
    double result = length * length;
    return result; // Return the calculated area
}

// Function definition to calculate the volume of a cube
double cube(double length) {
    // Calculate cube volume
    double result = length * length * length;
    return result; // Return the calculated volume
}
