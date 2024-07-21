#include<iostream>
#include<ctime>

int main(){
    // Pseudo-random number generation: NOT truly random (but close)
    // srand() = seed the random number generator, which is then used by the rand() function to generate pseudo-random numbers
    // rand() =  generate pseudo-random integers. It returns a random integer between 0 and RAND_MAX, which is a constant defined in the <cstdlib>
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate three random numbers between 1 and 6 (inclusive) and store them in variables
    int num1 =  (rand() % 6 ) + 1;
    int num2 =  (rand() % 6 ) + 1;
    int num3 =  (rand() % 6 ) + 1;

    // Print the generated random numbers
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}
