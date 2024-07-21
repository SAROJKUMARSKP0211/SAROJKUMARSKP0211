
#include<iostream>
int main(){
    // Do While Loop: Perform some block of code first,
    // then repeat again if condition is true

    int number;
    do
    {
       std::cout <<"Enter a positive number:";
       std::cin >> number;
    } 
    while(number < 0); // Continue looping as long as the number is negative

    // Once the loop exits, meaning a positive number is entered,
    // print the entered positive number
    std::cout<<"The number is "<< number;
  
    return 0;
}
