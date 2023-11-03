#include <iostream>
#include <string>

int count(const std::string& str, char a) {
    int count = 0;
    for (char ch : str) {
        if (ch == a) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    char ch;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "Enter a character: ";
    std::cin >> ch;

    int occurrences = count(str, ch);

    std::cout << "The character '" << ch << "' occurs " << occurrences << " times in the string." << std::endl;

    return 0;
}
