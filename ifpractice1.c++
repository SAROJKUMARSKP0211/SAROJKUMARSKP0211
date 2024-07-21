#include<iostream>

int main()
{
    int month; // Declare a variable to store the month
    std::cout << "Enter the month (1-12):"; // Prompt the user to enter the month
    std::cin >> month; // Read the input value for the month from the user

    // Check the value of the month and output the corresponding message
    if(month == 1){
        std::cout << "It's January";
    }
    else if(month == 2){
        std::cout << "It's February";
    }
    else if(month == 3){
        std::cout << "It's March";
    }
    else if(month == 4){
        std::cout << "It's April";
    }
    else if(month == 5){
        std::cout << "It's May";
    }
    else if(month == 6){
        std::cout << "It's June";
    }
    else if(month == 7){
        std::cout << "It's July";
    }
    else if(month == 8){
        std::cout << "It's August";
    }
    else if(month == 9){
        std::cout << "It's September";
    }
    else if(month == 10){
        std::cout << "It's October";
    }
    else if(month == 11){
        std::cout << "It's November";
    }
    else if(month == 12){
        std::cout << "It's December";
    }
    else{
        std::cout << "You didn't enter a number between (1-12)";
    }

    return 0;
}
