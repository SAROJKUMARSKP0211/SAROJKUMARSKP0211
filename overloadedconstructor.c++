#include<iostream>

// Definition of a class named 'Pizza'
class Pizza {
public:
    std::string topping1;  // Member variable to store the first topping
    std::string topping2;  // Member variable to store the second topping

    // Constructor with one parameter for 'topping1'
    Pizza(std::string topping1) {
        // Assigning the value of 'topping1' using the constructor argument
        this->topping1 = topping1;
    }

    // Constructor with two parameters for 'topping1' and 'topping2'
    Pizza(std::string topping1, std::string topping2) {
        // Assigning the values of 'topping1' and 'topping2' using the constructor arguments
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {
    // Overloaded Constructor = multiple constructors with the same name but different parameters
    //                          allows for varying arguments when instantiating an object

    // Creating an instance of the 'Pizza' class using the constructor with one parameter
    Pizza Pizza1("Pepperoni");
    std::cout << Pizza1.topping1 << '\n';  // Printing the first topping of Pizza1

    // Creating another instance of the 'Pizza' class using the constructor with two parameters
    Pizza Pizza2("Mushrooms", "Peppers");
    std::cout << Pizza2.topping1 << '\n';  // Printing the first topping of Pizza2
    std::cout << Pizza2.topping2 << '\n';  // Printing the second topping of Pizza2

    return 0;
}
