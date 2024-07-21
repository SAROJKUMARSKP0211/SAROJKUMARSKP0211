#include<iostream>

int main(){
    // Dynamic memory allocation: Memory that is allocated after the program is already compiled & running.
    // Use the 'new' operator to allocate memory in the heap rather than the stack.
    // Useful when we don't know how much memory we will need. 
    // Makes our program more flexible, especially when accepting user input.

    // Allocate memory for an integer on the heap
    int *pNum = NULL; // Pointer to store the address of the dynamically allocated integer
    pNum = new int; // Dynamically allocate memory for an integer

    *pNum = 21; // Assign a value to the dynamically allocated integer

    // Output the address and value of the dynamically allocated integer
    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // Deallocate the dynamically allocated integer to free up memory
    delete pNum;


    // Dynamically allocate memory for an array of characters based on user input
    char *pgrade = NULL; // Pointer to store the address of the dynamically allocated array
    int size;
    std::cout <<"How many grades to enter? :";
    std::cin >> size;
    pgrade = new char[size]; // Dynamically allocate memory for an array of characters

    // Prompt the user to enter grades and store them in the dynamically allocated array
    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pgrade[i];
    }

    // Output the grades stored in the dynamically allocated array
    for(int i = 0; i < size; i++){
        std::cout << pgrade[i] << " ";
    }

    // Deallocate the dynamically allocated array to free up memory
    delete[] pgrade;

    return 0;
}
