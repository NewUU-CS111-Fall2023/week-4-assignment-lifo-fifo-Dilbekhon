#include <iostream>
#include <cmath>

double getTriangleArea(const double points[][2]) {
    double x1 = points[0][0];
    double y1 = points[0][1];
    double x2 = points[1][0];
    double y2 = points[1][1];
    double x3 = points[2][0];
    double y3 = points[2][1];

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double s = (side1 + side2 + side3) / 2;

    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    if (std::isnan(area)) {
        return 0.0;
    }

    return area;
}

int main() {
    double points[3][2];

    std::cout << "Enter the coordinates of three points of a triangle:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Point " << i + 1 << ": ";
        std::cin >> points[i][0] >> points[i][1];
    }

    double area = getTriangleArea(points);

    if (area == 0.0) {
        std::cout << "The three points are on the same line. Triangle area cannot be calculated." << std::endl;
    } else {
        std::cout << "The area of the triangle is: " << area << std::endl;
    }

    return 0;
}
