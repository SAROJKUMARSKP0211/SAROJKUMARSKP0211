#include<iostream>
// for loop = a control flow statement that allows you to execute a block of code repeatedly until a specified condition is met
//Syntax = for (initialization; condition; increment/decrement) {
// code to be executed}
int main(){
    int i;

    // First loop: Prints "Happy New Year" 6 times
    for(i=0;i<=5;i++){
        std::cout<<"Happy New Year\n";
    }

    // Second loop: Prints numbers from 0 to 5
    for(i=0;i<=5;i++){
        std::cout << i << '\n';
    }

    return 0;
}
