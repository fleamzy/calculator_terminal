#include <iostream>

int main() {

    // Declaration
    double num1;
    double num2;
    char op;
    double sum;

    // Interface
    std::cout << "*****************************\n";
    std::cout << "WELCOME TO CONSOLE CALCULATOR\n";
    std::cout << "+, -, *, /\n";
    
    // User input
    std::cout << "\nEnter your #1: ";
    std::cin >> num1;
    std::cout << "Enter your operator: ";
    std::cin >> op;
    std::cout << "Enter your #2: ";
    std::cin >> num2;

    // Checks if user's input is valid
    while (true) {
        // Does the math
        if (op == '+') {
            sum = num1 + num2;
            break;
        }
        else if (op == '-') {
            sum = num1 - num2;
            break;
        }
        else if (op == '*') {
            sum = num1 * num2;
            break;
        }
        else if (op == '/') {
            sum = num1 / num2;
            break;
        }
        else {
            std::cout << "Invalid input!\n";
            std::cout << "Enter your operator: ";
            std::cin >> op;
            std::cout << "\n";
        }
    }

    // Prints result
    std::cout << "\nThe result is " << sum << ".\n";
    std::cout << "*****************************";
}