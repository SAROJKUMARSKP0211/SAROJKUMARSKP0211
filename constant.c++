#include<iostream>

int main()
{
    // The `const` keyword specifies that a variable's value is constant
    // It tells the compiler to prevent anything from modifying it (read-only)

    const double pi = 3.14159;
    // pi = 420.69; (Here we cannot change the value of pi because pi is constant here)

    const double radius = 10;
    double circumference = 2 * pi * radius;

    // Printing the circumference followed by "cm" and a newline
    std::cout << circumference << "cm" << '\n';

    const int light_speed = 30000000;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    // Printing the values of the constants followed by newlines
    std::cout << light_speed << '\n';
    std::cout << WIDTH << '\n';
    std::cout << HEIGHT << '\n';

    return 0;
}
