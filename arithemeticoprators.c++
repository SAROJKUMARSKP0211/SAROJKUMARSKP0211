#include<iostream>

int main()
{
    // Arithmetic operators: These operators return the result of a specific arithmetic operation.
    // Precedence rules:
    // 1. Parentheses
    // 2. Multiplication and division
    // 3. Addition and subtraction

    int students = 20;

    // Addition
    students = students + 1; // Incrementing students by 1
    students++; // Another way to increment students by 1 using the increment operator
    std::cout << students << '\n'; // Output the updated value of students

    // Subtraction
    students = students - 1; // Decrementing students by 1
    students -= 2; // Decrementing students by 2 using the shorthand assignment operator
    std::cout << students << '\n'; // Output the updated value of students

    // Multiplication
    students = students * 2; // Doubling the value of students
    students *= 2; // Doubling the value of students using the shorthand assignment operator
    std::cout << students << '\n'; // Output the updated value of students

    // Division
    students = students / 2; // Halving the value of students
    students /= 2; // Halving the value of students using the shorthand assignment operator
    std::cout << students << '\n'; // Output the updated value of students

    // Expression combining arithmetic operations
    students = 6 - 5 + 4 * 3 / 2; // Evaluating the expression
    std::cout << students << '\n'; // Output the result of the expression

    return 0;
}
