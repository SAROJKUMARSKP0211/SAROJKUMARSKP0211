#include<iostream>

int main() {
    // Memory Address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator).

    // Declaring and initializing variables
    std::string name = "Saroj"; // Declare a string variable named "name" and assign it the value "Saroj"
    int age = 20; // Declare an integer variable named "age" and assign it the value 20
    bool students = true; // Declare a boolean variable named "students" and assign it the value true

    // Printing the memory addresses of the variables
    std::cout << &name << '\n'; // Print the memory address of the variable "name"
    std::cout << &age << '\n'; // Print the memory address of the variable "age"
    std::cout << &students << '\n'; // Print the memory address of the variable "students"

    return 0;
}
