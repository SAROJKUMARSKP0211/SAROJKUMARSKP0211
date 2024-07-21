#include<iostream>

// Function prototype for walk function
void walk(int steps);

int main(){
    // Recursion: a programming technique where a function invokes itself from within.
    // Recursion is useful for breaking down a complex concept into repeatable single steps.

    // Advantages of recursion:
    // - Requires less code and is cleaner, especially for certain problems like sorting and searching algorithms.

    // Disadvantages of recursion:
    // - Uses more memory as each recursive call requires additional space on the call stack.
    // - Can be slower compared to iterative solutions for some problems.

    // Call the walk function with an initial number of steps
    walk(100);

    return 0;
}

// Recursive function to simulate walking a certain number of steps
void walk(int steps){
    // Output a message indicating that a step is taken
    std::cout << "You take a step!\n";

    // Call the walk function recursively with a reduced number of steps
    walk(steps); // This will result in infinite recursion, as there's no base case to terminate the recursion
}
