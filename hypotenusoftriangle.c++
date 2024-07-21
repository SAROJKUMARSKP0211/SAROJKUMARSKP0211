#include<iostream>
#include<cmath>

int main()
{
    double a; // Declare variable to store the length of side a
    double b; // Declare variable to store the length of side b
    double c; // Declare variable to store the length of side c (hypotenuse)

    // Prompt the user to enter the length of side a
    std::cout << "Enter side a:" << '\n';
    std::cin >> a; // Read the input value for side a from the user

    // Prompt the user to enter the length of side b
    std::cout << "Enter side b:" << '\n';
    std::cin >> b; // Read the input value for side b from the user

    // Calculate the square of side a
    a = pow(a, 2);
    // Calculate the square of side b
    b = pow(b, 2);
    // Calculate the length of side c (hypotenuse) using the Pythagorean theorem
    c = sqrt(a + b);

    // Output the length of side c (hypotenuse)
    std::cout << "Length of hypotenuse (side C): " << c;

    return 0;
}
