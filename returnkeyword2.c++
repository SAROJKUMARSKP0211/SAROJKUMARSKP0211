#include<iostream>

// Function prototype declaration
std::string concatStrings(std::string string1, std::string string2);

// Main function
int main() {
    // Declare and initialize variables
    std::string firstname = "Saroj";
    std::string Secondname = "Kumar";

    // Call concatStrings function to concatenate strings
    std::string Fullname = concatStrings(firstname, Secondname);

    // Print the concatenated full name
    std::cout << "Full name is " << Fullname << '\n';

    return 0; // Indicate successful program execution
}

// Function definition to concatenate two strings
std::string concatStrings(std::string string1, std::string string2) {
    // Concatenate the two strings with a space in between
    return string1 + " " + string2; // Return the concatenated string
}
