#include <iostream>
#include <cctype>

bool isValidPassword(const std::string& password) {
    // Check the length of the password
    if (password.length() < 8) {
        return false;
    }

    // Check if the password contains only letters and digits
    for (char ch : password) {
        if (!isalnum(ch)) {
            return false;
        }
    }

    // Check if the password contains at least two digits
    int digitCount = 0;
    for (char ch : password) {
        if (isdigit(ch)) {
            digitCount++;
        }
    }
    if (digitCount < 2) {
        return false;
    }

    return true;
}

int main() {
    std::string password;
    std::cout << "Enter a password: ";
    std::cin >> password;

    if (isValidPassword(password)) {
        std::cout << "Valid Password" << std::endl;
    } else {
        std::cout << "Invalid Password" << std::endl;
    }

    return 0;
}
