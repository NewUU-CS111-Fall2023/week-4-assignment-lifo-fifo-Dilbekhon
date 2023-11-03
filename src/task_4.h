#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter the values of a, b, and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

        std::cout << "The equation has two real roots:\n";
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "The equation has one real root:\n";
        std::cout << "Root: " << root << std::endl;
    } else {
        std::cout << "The equation has no real roots." << std::endl;
    }

    return 0;
}
