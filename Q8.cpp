#include <iostream>

void printReverse(int num) {
    if (num == 0) {
        return;
    }

    std::cout << num % 10; // Print the last digit
    printReverse(num / 10); // Recursively call the function for the remaining digits
}

int main() {
    int number;

    std::cout << "Enter an integer number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Number in reverse order: ";
    if (number == 0) {
        std::cout << "0";
    } else {
        printReverse(number);
    }
    
    std::cout << std::endl;

    return 0;
}