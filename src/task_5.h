#include <iostream>

int main() {
    int asciiCode;
    std::cout << "Enter an ASCII code (between 0 and 127): ";
    std::cin >> asciiCode;

    if (asciiCode >= 0 && asciiCode <= 127) {
        char ch = static_cast<char>(asciiCode);
        std::cout << "The character corresponding to ASCII code " << asciiCode << " is: " << ch << std::endl;
    } else {
        std::cout << "Invalid ASCII code. Please enter a value between 0 and 127." << std::endl;
    }

    return 0;
}
