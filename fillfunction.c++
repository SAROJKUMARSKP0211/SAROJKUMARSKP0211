#include<iostream>

int main(){
    // Fill() = Fills a range of elements with a specified value
    //         fill(begin, end, value)
    // Here, we are using fill to fill the first half of the 'foods' array with "pizza"
    // and the second half with "APPLE".

    const int SIZE = 100; // Size of the array
    std::string foods[SIZE]; // Array to store foods

    // Fill the first half of the 'foods' array with "pizza"
    // The range [foods, foods + (SIZE/2)) specifies the range of elements to be filled,
    // starting from the beginning of the array ('foods') and ending just before the midpoint.
    // "pizza" is the value with which the elements will be filled.
    std::fill(foods, foods + (SIZE/2), "pizza");

    // Fill the second half of the 'foods' array with "APPLE"
    // The range [foods + (SIZE/2), foods + SIZE) specifies the range of elements to be filled,
    // starting from the midpoint and ending at the end of the array ('foods + SIZE').
    // "APPLE" is the value with which the elements will be filled.
    std::fill(foods + (SIZE/2), foods + SIZE, "APPLE");

    // Output the contents of the 'foods' array
    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}
