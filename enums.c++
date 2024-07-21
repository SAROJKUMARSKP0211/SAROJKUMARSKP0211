#include<iostream>

// Definition of an enum named 'Day'
enum Day {
    sunday = 0,     // Enum constant for Sunday with value 0
    monday = 1,     // Enum constant for Monday with value 1
    tuesday = 2,    // Enum constant for Tuesday with value 2
    wednesday = 3,  // Enum constant for Wednesday with value 3
    thrusday = 4,   // Enum constant for Thursday with value 4
    friday = 5,     // Enum constant for Friday with value 5
    saturday = 6    // Enum constant for Saturday with value 6
};

int main(){
    // Enums: a user-defined data type that consists of paired named-integer constants.
    //        Great if you have a set of potential options.

    // Declare a variable 'today' of type 'Day' and assign it the value 'sunday'
    Day today = sunday;

    // Use a switch statement to check the value of 'today'
    switch (today) {
        case sunday:    // If 'today' is Sunday
            std::cout << "It's Sunday!\n";
            break;
        case monday:    // If 'today' is Monday
            std::cout << "It's Monday!\n";
            break;
        case tuesday:   // If 'today' is Tuesday
            std::cout << "It's Tuesday!\n";
            break;
        case wednesday: // If 'today' is Wednesday
            std::cout << "It's Wednesday!\n";
            break;
        case thrusday:  // If 'today' is Thursday
            std::cout << "It's Thursday!\n";
            break;
        case friday:    // If 'today' is Friday
            std::cout << "It's Friday!\n";
            break;
        case saturday:  // If 'today' is Saturday
            std::cout << "It's Saturday!\n";
            break;
    }
    return 0;
}
