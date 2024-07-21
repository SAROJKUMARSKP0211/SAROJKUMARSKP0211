#include<iostream>

// Global variable declaration
int myNum = 3;

// Function prototype
void printNum(int myNum);

int main() {
     // Local variables = declared inside a function or block{}
    // Global variables = declared outside of all functions
    // Local variables are declared inside the main function
    // Local variable with the same name as the global variable
    int myNum = 2;

    // Call the printNum function with the local variable myNum as argument
    printNum(myNum);

    // Access the global variable myNum using the scope resolution operator ::
    std::cout << ::myNum << '\n'; // This will print the global variable myNum

    return 0;
}

// Function definition
void printNum(int myNum) {
    // This function takes an integer parameter named myNum
    // It prints the value of the parameter
    std::cout << myNum << '\n';
}
