#include<iostream>

int main(){
    // Sizeof() = determine the size in bytes of a:
    //           variable, data type, class, objects, etc.

    // Declaring variables of different data types
    std::string name = "Saroj"; // String variable
    char grade = 'f';           // Character variable
    bool student = true;        // Boolean variable
    double gpa = 2.4;           // Double variable
    char letter[] = {'a','f','g'}; // Character array

    // Printing the size in bytes of each variable
    std::cout << sizeof(gpa) << " Bytes\n";      // Output: Size of double variable in bytes
    std::cout << sizeof(name) << " Bytes\n";     // Output: Size of string variable in bytes
    std::cout << sizeof(grade) << " Bytes\n";    // Output: Size of char variable in bytes
    std::cout << sizeof(student) << " Bytes\n";  // Output: Size of bool variable in bytes
    std::cout << sizeof(letter) << " Bytes\n";   // Output: Size of char array in bytes

    return 0;
}
