#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a mathematical expression (e.g., 3 + 4): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    double num1, num2;
    char op;

    if (!(iss >> num1 >> op >> num2)) {
        std::cerr << "Invalid input format." << std::endl;
        return 1;
    }

    double result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cerr << "Error: Division by zero." << std::endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            std::cerr << "Invalid operator." << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}