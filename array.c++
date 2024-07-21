#include<iostream>

int main(){
    // Array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //        "Kind of like variable that holds multiple values"
    
    // Declaring and initializing an array of strings named 'car' with 5 elements
    std::string car[5] = {"Corvette", "mustang", "Camry"};
    
    // Printing the first three elements of the 'car' array
    std::cout << car[0] << '\n'; // Output: Corvette
    std::cout << car[1] << '\n'; // Output: mustang
    std::cout << car[2] << '\n'; // Output: Camry

    // Declaring and initializing an array of doubles named 'prices' with 3 elements
    double prices[]= { 5.12,553.1,521.01};
    
    // Printing the elements of the 'prices' array
    std::cout << prices[0] << '\n'; // Output: 5.12
    std::cout << prices[1] << '\n'; // Output: 553.1
    std::cout << prices[2] << '\n'; // Output: 521.01

    return 0;
}
