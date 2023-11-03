#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer between 0 and 1000: ";
    std::cin >> number;

    if (number < 0 || number > 1000) {
        std::cout << "Invalid input. Please enter an integer between 0 and 1000." << std::endl;
        return 0;
    }

    int sum = 0;
    int remainder;

    while (number > 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}
