#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a mathematical expression (e.g., 3 + 4): ";
    getline(cin, input);

    istringstream iss(input);
    double num1, num2;
    char op;

    if (!(iss >> num1 >> op >> num2)) {
        cerr << "Invalid input format." << endl;
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
                cerr << "Error: Division by zero." << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cerr << "Invalid operator." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}