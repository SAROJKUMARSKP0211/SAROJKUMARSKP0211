#include<iostream>

// Function prototype for searchArray function
int searchArray(int array[], int size, int element);

int main(){
    // Array to search
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    
    // Calculate the size of the array
    int size = sizeof(num)/sizeof(num[0]);
    
    // Variables to store user input and search result
    int index;
    int myNum;
    
    // Prompt the user to enter the element to be searched
    std::cout << "Enter element to be searched for:" << '\n';
    std::cin >> myNum;

    // Call searchArray function to find the index of the element
    index = searchArray(num, size, myNum);
    
    // Check if the element was found or not
    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array";
    }

    return 0;
}

// Function to search for an element in an array
int searchArray(int array[], int size, int element){
    // Loop through the array to search for the element
    for(int i = 0; i < size; i++){
        if(array[i] == element){ // If element is found, return its index
            return i;
        }
    }
    // If element is not found, return -1
    return -1;
}
