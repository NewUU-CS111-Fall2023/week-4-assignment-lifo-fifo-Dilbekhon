#include <iostream>

int main() {
    const int lowerBound = 100;
    const int upperBound = 200;
    const int numbersPerLine = 10;

    int count = 0;

    for (int number = lowerBound; number <= upperBound; number++) {
        if ((number % 5 == 0 || number % 6 == 0) && !(number % 5 == 0 && number % 6 == 0)) {
            std::cout << number << " ";
            count++;

            if (count % numbersPerLine == 0) {
                std::cout << std::endl;
            }
        }
    }

    return 0;
}
