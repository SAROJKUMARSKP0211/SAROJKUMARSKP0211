#include<iostream>
int main(){
    // Break: Break out of a loop
    // Continue: Skip current iteration

    int i;

    // Using break to exit the loop when i equals 13
    for (i = 0; i <= 20; i++)
    {
       if (i == 13) {
        break;
       }
       std::cout << i << '\n';
    }

    // Using continue to skip printing when i equals 13
    for (i = 0; i <= 20; i++)
    {
       if (i == 13) {
        continue;
       }
       std::cout << i << '\n';
    }
    
    return 0;
}
