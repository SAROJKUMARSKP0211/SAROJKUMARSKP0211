#include<iostream>

// Function prototype for factorial function
int factorial(int num);

int main(){
    // Calculate and output the factorial of 10
    std::cout << factorial(10);

    return 0;
}

// Recursive function to calculate the factorial of a number
int factorial(int num){
    // Base case: if num is greater than 1, recursively call factorial function with num - 1
    // Recursive case: multiply num with the result of factorial(num - 1)
    if(num > 1){
        return num * factorial(num - 1);
    }
    // Base case: if num is 1 or 0, return 1 (the factorial of 0 and 1 is 1)
    else{
        return 1;
    }
}
