#include <iostream>
#include <limits>

double min(const double array[], int size) {
    double minValue = std::numeric_limits<double>::max();
    for (int i = 0; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        }
    }
    return minValue;
}

int main() {
    const int size = 10;
    double numbers[size];

    std::cout << "Enter 10 numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    double minValue = min(numbers, size);

    std::cout << "The minimum value is: " << minValue << std::endl;

    return 0;
}
