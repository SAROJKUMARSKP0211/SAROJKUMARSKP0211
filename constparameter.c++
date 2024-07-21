#include<iostream>

// Function prototype with const parameters
void printInfo(const std::string name, const int age);

int main() {
    //const parameter = parameter that is effectively read-only 
    // code is more secure & conveys intent
     // useful for references and pointers.
     
    std::string name = "Saroj";
    int age = 20;

    printInfo(name, age);

    return 0;
}

// Function definition with const parameters
void printInfo(const std::string name, const int age) {
    // Attempting to modify const parameters will cause compilation errors
    // name = " "; // Error: Attempting to modify a const parameter
    // age = 0;    // Error: Attempting to modify a const parameter

    std::cout << name << '\n';
    std::cout << age << '\n';
}
