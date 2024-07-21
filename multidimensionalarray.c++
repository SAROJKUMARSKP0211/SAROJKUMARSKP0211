#include<iostream>

int main() {
    // Define a 2D array of strings to store car names
    std::string cars[][3]= {
        {"Mustang","Escape","f-150"},
        {"Corvette","Ewuinix","Silverado" },
        {"Challenger","Durango","Ram 1500"}
    };

    // Print the contents of the 2D array manually
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << " " << '\n';                
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << " " << '\n';
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << " " << '\n';

    // Calculate the number of rows and columns in the 2D array
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    // Loop through the 2D array and print its contents
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
