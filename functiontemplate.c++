#include<iostream>

// Syntax for template declaration should be template<typename T, typename U>
// The 'auto' return type will deduce the type of the larger value between 'x' and 'y'
template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y; // Return the larger value between 'x' and 'y'
}

int main(){
    // Function template: describes what a function looks like.
    // Can be used to generate as many overloaded functions
    // as needed, each using different data types.
    
    // Call the max function with two double values
    std::cout << max(1.5, 2.5) << '\n'; // Output the result of comparing and printing the larger value

    return 0;
}
