#include<iostream>

int main() {
    // Demonstration of logical operators
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    // Check temperature
    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!\n";
    } else {
        std::cout << "The temperature is bad!\n";
    }

    // Check grade
    int grade;
    std::cout << "Enter the grade: ";
    std::cin >> grade;
    if (grade < 50 || grade > 75) {
        std::cout << "The grade is bad!\n";
    } else {
        std::cout << "The grade is good!\n";
    }

    // Check weather
    bool sunny = true;
    if (!sunny) { // Using the ! operator to check if sunny is false
        std::cout << "It is sunny outside\n";
    } else {
        std::cout << "It is cloudy outside!\n";
    }

    return 0;
}
