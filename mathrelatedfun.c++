#include<iostream>
#include<cmath>

// std::max()= find maximum of x and y.
// std::min()= find minimum of x and y.
// pow()= raises x to power y;
// sqrt()= Returns the square root of x
// abs()=  Returns the absolute value of x
// round()= Returns the nearest integer to x.
// ceil()= Returns the smallest integer not less than x.
// floor()= Returns the nearest integer to x.

int main ()
{
    double x = 3.85;
    double y = 4;
    double z;

    // Finding the maximum of x and y
    z = std::max(x, y);
    std::cout << z << '\n';
 
    // Finding the minimum of x and y
    z = std::min(x, y);
    std::cout << z << '\n';

    // Calculating 4 raised to the power of 5
    z = pow(4, 5);
    std::cout << z << '\n';

    // Calculating the square root of 9
    z = sqrt(9);
    std::cout << z << '\n';

    // Calculating the absolute value of -3
    z = abs(-3);
    std::cout << z << '\n';

    // Rounding the value of x to the nearest integer
    z = round(x);
    std::cout << z << '\n';

    // Rounding up the value of x to the nearest integer
    z = ceil(x);
    std::cout << z << '\n';

    // Rounding down the value of x to the nearest integer
    z = floor(x);
    std::cout << z << '\n';

    return 0;
}
