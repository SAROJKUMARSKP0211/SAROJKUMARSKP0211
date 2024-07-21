#include<iostream>

// Define a namespace named "first"
namespace first {
    int x = 1; // Define a variable x within the namespace first
}

// Define another namespace named "second"
namespace second {
    int x = 5; // Define a variable x within the namespace second
}

int main()
{
    // Namespace: Provides a solution for preventing name conflicts in large projects.
    // Each entity needs a unique name.
    // A namespace allows for identically named entities as long as the namespaces are different.

    int x = 0; // Define a variable x within the main scope
    std::cout << x << '\n'; // Print the value of x from the main scope
    std::cout << first::x << '\n'; // Print the value of x from the namespace first
    std::cout << second::x << '\n'; // Print the value of x from the namespace second

    // Using directive: Bring all entities from the namespace first into the current scope
    using namespace first;
    std::cout << x << '\n'; // Print the value of x (from namespace first) in the current scope

    // Using directive: Bring all entities from the namespace second into the current scope
    using namespace second;
    std::cout << x; // Print the value of x (from namespace second) in the current scope

    return 0;
}
