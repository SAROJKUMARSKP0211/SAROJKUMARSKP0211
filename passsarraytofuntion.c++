#include<iostream>

// Function prototype for getTotal function
double getTotal(double prices[], int size);

int main(){
    // Array of prices
    double prices[] = {49,50,28,68};
    
    // Calculate the size of the array
    int size = sizeof(prices)/sizeof(prices[0]);
    
    // Call getTotal function to calculate the total
    double total = getTotal(prices,size);

    // Output the total
    std::cout << "$ "<< total;

    return 0;
}

// Function to calculate the total of prices
double getTotal(double prices[], int size){
    double total = 0;
    // Loop through the prices array and sum up the prices
    for(int i =0;i<size;i++){
        total = total + prices[i];
    }
    return total; // Return the total
}
