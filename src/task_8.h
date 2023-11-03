#include <iostream>

int sumDigits(long n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    long number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int sum = sumDigits(number);
    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}
