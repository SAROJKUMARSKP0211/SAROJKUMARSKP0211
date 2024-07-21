#include<iostream>
#include<ctime>

int main(){
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 1 and 5
    int randNum = rand() % 5 + 1;

    // Use a switch statement to determine the prize based on the random number
    switch (randNum)
    {
    case 1: 
        std::cout <<"You win a bumper sticker!\n"; // Prize for case 1
        break;
    case 2: 
        std::cout <<"You win a T-shirt!\n"; // Prize for case 2
        break;    
    case 3: 
        std::cout <<"You win a book!\n"; // Prize for case 3
        break;
    case 4: 
        std::cout <<"You win a jacket!\n"; // Prize for case 4
        break;
    case 5: 
        std::cout <<"You win concert tickets!\n"; // Prize for case 5
        break;        
    default:
        std::cout<<"Better luck next time"; // Default message if the random number doesn't match any case
        break;
    }

    return 0;
}
