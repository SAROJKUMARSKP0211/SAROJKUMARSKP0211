#include<iostream>

int main() {
    // Pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    // Declaring variables
    std::string name = "Saroj Kumar";
    int age = 20;
    std::string freePizzas[5] = {"Pizzas 1", "Pizzas 2", "Pizzas 3", "Pizzas 4", "Pizzas 5"};

    // Declaring pointers
    std::string *pName = &name; // Pointer to string holding the address of 'name'
    int *pAge = &age; // Pointer to integer holding the address of 'age'
    std::string *pFreePizzas = freePizzas; // Pointer to string holding the address of the first element of 'freePizzas'

    // Printing the values using pointers
    std::cout << *pName << '\n'; // Dereference the pointer to print the value of 'name'
    std::cout << *pAge << '\n'; // Dereference the pointer to print the value of 'age'
    std::cout << freePizzas << '\n'; // This will print the memory address of the first element of 'freePizzas'

    return 0;
}
