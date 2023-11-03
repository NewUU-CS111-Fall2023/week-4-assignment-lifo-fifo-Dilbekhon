#include <iostream>

bool equals(const int m1[][3], const int m2[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m1[i][j] != m2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m1[3][3];
    int m2[3][3];

    std::cout << "Enter the values for the first 3x3 array:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> m1[i][j];
        }
    }

    std::cout << "Enter the values for the second 3x3 array:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> m2[i][j];
        }
    }

    bool isIdentical = equals(m1, m2);

    if (isIdentical) {
        std::cout << "The two arrays are identical." << std::endl;
    } else {
        std::cout << "The two arrays are not identical." << std::endl;
    }

    return 0;
}
