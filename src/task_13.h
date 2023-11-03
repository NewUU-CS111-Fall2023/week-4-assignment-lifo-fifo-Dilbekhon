#include <iostream>
#include <algorithm>

void sort(int m[][3]) {
    std::sort(m, m + 3, [](const int* row1, const int* row2) {
        for (int i = 0; i < 3; i++) {
            if (row1[i] != row2[i]) {
                return row1[i] < row2[i];
            }
        }
        return false;
    });
}

void displayMatrix(int m[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int m[3][3];

    std::cout << "Enter the values for the 3x3 array:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> m[i][j];
        }
    }

    std::cout << "Before sorting:" << std::endl;
    displayMatrix(m);

    sort(m);

    std::cout << "After sorting:" << std::endl;
    displayMatrix(m);

    return 0;
}
