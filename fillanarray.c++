#include<iostream>

int main() {
    // Declare an array to store 5 food items
    std::string foods[5];
    
    // Calculate the size of the array
    int size = sizeof(foods) / sizeof(foods[0]);
    
    // Declare a temporary string variable to store user input
    std::string temp;

    // Loop to get food items from the user
    for(int i = 0; i < size; i++) {
        // Prompt the user to enter a food item or 'q' to quit
        std::cout << "Enter a food you like or 'q' to quit :" << i + 1 << '\n';
        
        // Get user input
        std::getline(std::cin, temp);
        
        // If the user enters 'q', break out of the loop
        if(temp == "q") {
            break;
        } else {
            // Otherwise, store the food item in the array
            foods[i] = temp;
        }
    }

    // Print the food items the user entered
    std::cout << "You like the following food:\n";
    for(int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
    }

    return 0;
}
