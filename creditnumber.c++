#include<iostream>

// Function to get the sum of digits of a number
int getDigits(const int number) {
    return number % 10 + (number / 10 % 10);
}

// Function to sum the odd-positioned digits of the card number
int sumOdddigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // Convert char to integer by subtracting ASCII value of '0'
    }
    return sum;
}

// Function to sum the even-positioned digits of the card number after doubling them
int sumEvendigits(const std::string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigits((cardNumber[i] - '0') * 2); // Double the digit and get sum of digits if it's a two-digit number
    }
    return sum;
}

int main() {

    //Luhn Alogrithm = 1.Double every second digit from right to left. If doubled number is 2 digits, split them
//                 2. Add all single digits form step 1.
//                 3. Add all odd numbered digit from right to left.
//                 4. sum results from step 2 & 3.
//                 5. If step 4 is divisble by 10, # is valid.

    std::string cardnumber;
    int results = 0;

    std::cout << "Enter a credit card number :\n";
    std::cin >> cardnumber;

    // Calculate the sum of even and odd digits
    results = sumEvendigits(cardnumber) + sumOdddigits(cardnumber);

    // Check if the total sum is divisible by 10
    if (results % 10 == 0) {
        std::cout << "Card number is valid\n";
    } else {
        std::cout << "Card number is invalid\n";
    }

    return 0;
}
