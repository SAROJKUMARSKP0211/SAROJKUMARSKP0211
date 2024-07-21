#include<iostream>

// Function prototypes
void bakePizza();                                 // Function to bake a plain pizza
void bakePizza(std::string topping1);             // Function to bake a pizza with one topping
void bakePizza(std::string topping1, std::string topping2); // Function to bake a pizza with two toppings

int main() {
    // Calling different versions of bakePizza function with different toppings
    bakePizza();                                // Plain pizza
    bakePizza("Pepperoni");                    // Pizza with one topping
    bakePizza("Pepperoni", "Mushroom");        // Pizza with two toppings

    return 0; // Indicate successful program execution
}

// Function definition to bake a plain pizza
void bakePizza() {
    std::cout << "Here is your Pizza!\n";
}

// Function definition to bake a pizza with one topping
void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " Pizza!\n";
}

// Function definition to bake a pizza with two toppings
void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}
