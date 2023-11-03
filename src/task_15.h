#include <iostream>
#include <string>

int main() {
    std::string students[2][3] = {
        {"Brice", "Marvin", "Anna"},
        {"Kamal", "Maria", "Elissa"}
    };

    // Should print the values in students in order
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << students[row][col] << " ";
        }
    }

    return 0;
}
