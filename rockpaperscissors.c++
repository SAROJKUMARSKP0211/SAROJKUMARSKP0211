#include<iostream>
#include<ctime>

// Function prototypes
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    // Get user's choice
    player = getUserChoice();
    std::cout<<"Your choice";
    showChoice(player);

    // Get computer's choice
    computer = getComputerChoice();
    std::cout << "Computer Choice:\n";
    showChoice(computer);

    // Determine the winner
    chooseWinner(player,computer);

    return 0;
}

// Function to get user's choice
char getUserChoice(){
    char player ;
    std::cout<<"Rock-Paper-Scissors game!\n";
    do{
        std::cout<<"**************************\n";
        std::cout<<"'r' for rocks\n";
        std::cout<< "'p' for paper\n";
        std::cout<< "'s' for scissors\n ";
        std::cin>> player; 
    }while(player !='r' && player != 'p' && player !='s'); // Keep looping until a valid choice is made
    {
        return player;
    }
}

// Function to get computer's choice
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 +1; // Generate a random number between 1 and 3
    switch (num)
    {
    case 1 : return 'r'; // Rock
    case 2 : return 's'; // Scissors
    case 3 : return 'p'; // Paper
    }
}

// Function to display the choice
void showChoice(char choice){
    switch (choice)
    {
    case 'r' : std::cout<< " Rock\n"; // If choice is rock
        break;
    case 's' : std::cout<< " Scissor\n"; // If choice is scissor
        break;
    case 'p' : std::cout<< " Paper\n"; // If choice is paper
        break;    
    }    
}

// Function to determine the winner
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r' : if(computer == 'r'){ // If user chose rock
        std::cout<<"It's a tie!\n";
    }
    else if(computer == 'p'){
        std::cout << "You lose!\n"; // If computer chose paper
    }
    else{
        std::cout<<"You win\n"; // If computer chose scissors
    }
        break;
    
    case 's' : if(computer == 's'){ // If user chose scissors
        std::cout<<"It's a tie!\n";
    }
    else if(computer == 'p'){
        std::cout << "You win!\n"; // If computer chose paper
    }
    else{
        std::cout<<"You lose\n"; // If computer chose rock
    }
        break;
    case 'p' : if(computer == 'p'){ // If user chose paper
        std::cout<<"It's a tie!\n";
    }
    else if(computer == 'r'){
        std::cout << "You win!\n"; // If computer chose rock
    }
    else{
        std::cout<<"You lose!\n"; // If computer chose scissors
    }
        break;    
    }
}
