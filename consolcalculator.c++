#include<iostream>

int main() {
    // Declaration of variables
    char op;
    double num1;
    double num2;
    double result;

    // User interface
    std::cout << "**************CALCULATOR**************\n";
    std::cout << "Enter either (+ - * /):";
    std::cin >> op;

    std::cout << "Enter num1 :";
    std::cin >> num1;

    std::cout << "Enter num2 :";
    std::cin >> num2;

    // Switch statement to perform the arithmetic operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "result:" << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result:" << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result:" << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result:" << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid response";
            break;
    }

    std::cout << "**************************************\n";
    return 0;
}
