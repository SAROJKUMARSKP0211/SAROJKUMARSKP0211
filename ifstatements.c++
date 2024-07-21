#include<iostream>

int main()
{
    // Prompt the user to enter their age
    std::cout << "Enter your age:" << '\n';

    int age; // Declare a variable to store the age
    std::cin >> age; // Read the input value for age from the user

    // If statement = do something if a condition is true
    // if not, then don't do it

    // Check if the age is 18 or older
    if(age >= 18){
        std::cout << "Welcome to the site"; // Output a welcome message
    }
    // Check if the age is negative (less than 0)
    else if(age < 0){
        std::cout << "You haven't been born yet!"; // Output a message indicating the age is invalid
    }
    // Check if the age is greater than 100
    else if(age > 100){
        std::cout << "You are too old to enter this site"; // Output a message indicating the age is too high
    }
    // If none of the above conditions are true, execute this block
    else{
        std::cout << "You are not old enough to enter"; // Output a message indicating the age is too low
    }

    return 0;
}
