#include<iostream>
#include<iomanip>

// Function declarations
void showbalance(double balance); // Function to display balance
double deposit(); // Function to deposit money
double withdraw(double balance); // Function to withdraw money

int main(){
    double balance = 1000;
    int choice = 0;

    do{
        // Display menu
        std::cout << "********************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "********************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout <<"4. Exit\n";
        
        // Get user choice
        std::cin >> choice;

        // Clear input buffer
        std::cin.clear();
        fflush(stdin);

        // Switch based on user choice
        switch (choice)
        {
            case 1: showbalance(balance); // Show balance
                    break;
            case 2: balance = balance + deposit(); // Deposit money
                    showbalance(balance);
                    break;
            case 3: balance -= withdraw(balance); // Withdraw money
                    showbalance(balance);
                    break;
            case 4: std::cout << "Thanking for visiting!\n"; // Exit
                    break;        
            default: std::cout<< "Invalid Choice\n"; // Invalid choice
                    break;
        }
    } while(choice !=4); // Repeat until user chooses to exit
     return 0;
}

// Function to display balance
void showbalance(double balance){
    std::cout << "Your Balance is : $ " <<std::setprecision(2) << std::fixed << balance << '\n';
}

// Function to deposit money
double deposit(){
    double amount = 0;
    std::cout<<"Enter amount to deposit:\n";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }
    else{
        std::cout<<"That's not a valid amount\n";
        return 0;
    }
}

// Function to withdraw money
double withdraw(double balance){
    double amount = 0;

    std::cout<<"Enter amount to be withdrawn:\n";

    std::cin >> amount;
    if(amount > balance){
        std::cout<< "Insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout <<"That's not a valid amount\n";
        return 0;
    }
    else{
        return amount; 
    }
}
