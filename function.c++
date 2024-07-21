#include<iostream>

// Function declaration or prototype
void happyBirthday(std::string name, int age);

// Main function
int main() {
    // Function = A block of resuable code
    
    // Declare and initialize variables
    std::string name = "Saroj";
    int age = 20;

    // Call the happyBirthday function with the provided arguments
    happyBirthday(name, age);

    // Return 0 to indicate successful program execution
    return 0;
}

// Definition of the happyBirthday function
void happyBirthday(std::string name, int age) {
    // Print birthday messages
    std::cout << "Happy Birthday to " << name << '\n'; // Print birthday message 1
    std::cout << "Happy Birthday to " << name << '\n'; // Print birthday message 2
    std::cout << "Happy Birthday to " << name << '\n'; // Print birthday message 3
    std::cout << "Happy Birthday dear " << name << '\n'; // Print special birthday message
    std::cout << "You are " << age << " years old"; // Print age
}
