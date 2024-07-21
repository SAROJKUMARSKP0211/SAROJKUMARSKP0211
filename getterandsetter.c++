#include<iostream>

// Definition of the 'Stove' class
class Stove {
private:
    int temperature = 0;  // Private member variable to store the temperature

public:
    // Getter function to retrieve the temperature value
    int gettemperature() {
        return temperature;  // Returns the value of the temperature
    }

    // Setter function to set the temperature value
    void settemperature(int temperature) {
        // Check if the temperature is less than 0
        if (temperature < 0) {
            this->temperature = 0;  // Set temperature to 0
        }
        // Check if the temperature is greater than or equal to 10
        else if (temperature >= 10) {
            this->temperature = 10;  // Set temperature to 10
        }
        // Otherwise, set the temperature to the provided value
        else {
            this->temperature = temperature;
        }
    }
};

int main() {
    // Abstraction = hiding unnecessary data from outside a class
    // Getter = function that makes a private attribute READABLE
    // Setter = Function that makes a private attribute WRITEABLE

    Stove stove;  // Creating an instance of the 'Stove' class

    // Setting an invalid temperature value using the setter function
    stove.settemperature(100000000);

    // Displaying the temperature setting using the getter function
    std::cout << "The temperature setting is " << stove.gettemperature();

    return 0;
}
