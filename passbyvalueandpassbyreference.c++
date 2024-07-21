#include<iostream>

// Function prototype for swap function
void swap(std::string &x, std::string &y);

int main() {
    //Pass by value: Copies the value of the argument to the function parameter.
    //Pass by reference: Passes the memory address of the argument to the function 

    
    // Declaring and initializing string variables x and y
    std::string x = "Saroj Kumar";
    std::string y = "good boy";

    // Calling the swap function to swap the values of x and y
    swap(x, y);
   
    // Printing the swapped values of x and y
    std::cout << "X : " << x << '\n';
    std::cout << "Y : " << y << '\n';

    return 0;
}

// Function definition for swap function
void swap(std::string &x, std::string &y) {
    // Temporary variable to hold the value of x
    std::string temp;

    // Swapping the values of x and y using the temporary variable
    temp = x;
    x = y;
    y = temp;
}
