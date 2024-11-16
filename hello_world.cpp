#include <iostream>
int main() {
	// A variable for the user name
    std::string name;
    std::cout << "Enter your name: ";
	
	// Entering a name
    std::cin >> name;
	
	// Output of greeting and name
    std::cout << "Hello world from " << name << "!" << std::endl;
    return 0;
}