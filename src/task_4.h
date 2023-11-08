#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> stacks(N);
    std::vector<int> targetStacks(N, -1);

    for (int i = 0; i < N; ++i) {
        int k;
        std::cin >> k;
        stacks[i].resize(k);

        for (int j = 0; j < k; ++j) {
            std::cin >> stacks[i][j];
            stacks[i][j]--;  // Convert to 0-based indexing
        }
    }

    std::vector<int> result;  // Stores the actions

    for (int type = 0; type < N; ++type) {
        int sourceStack = -1;
        int destinationStack = -1;

        for (int i = 0; i < N; ++i) {
            if (targetStacks[i] == -1) {
      
                sourceStack = i;
                break;
            }
        }

        if (sourceStack == -1) {
   
            if (stacks[N - 1].back() == type) {
                stacks[N - 1].pop_back();
                result.push_back(N);
            } else {
                std::cout << "0" << std::endl;  // No solution
                return 0;
            }
        }

        for (int i = 0; i < N; ++i) {
            if (stacks[i].size() > 0 && stacks[i].back() == type) {
                destinationStack = i;
                break;
            }
        }

        if (destinationStack == -1) {
            std::cout << "0" << std::endl;  // No solution
            return 0;
        }

        int container = stacks[sourceStack].back();
        stacks[sourceStack].pop_back();
        stacks[destinationStack].push_back(container);
        targetStacks[sourceStack] = destinationStack;
        result.push_back(sourceStack + 1);  // Convert to 1-based indexing
        result.push_back(destinationStack + 1);
    }

    for (int i = 0; i < N; ++i) {
        if (!stacks[i].empty()) {
            std::cout << "0" << std::endl;  // No solution
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i += 2) {
        std::cout << result[i] << " " << result[i + 1] << std::endl;
    }

    return 0;
}
