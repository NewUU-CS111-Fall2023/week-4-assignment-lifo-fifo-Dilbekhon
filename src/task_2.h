#include <iostream>
#include <stack>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::stack<int> track1;
    std::vector<int> actions;  // Store the actions to be performed

    for (int i = 0; i < N; i++) {
        int car;
        std::cin >> car;

        if (!track1.empty() && track1.top() == car) {
          
            track1.pop();
            actions.push_back(2);
            actions.push_back(car);
        } else {
           
            while (!track1.empty() && track1.top() != car) {
                int top_car = track1.top();
                track1.pop();
                actions.push_back(1);
                actions.push_back(top_car);
            }

            if (track1.empty()) {
                // If track 1 is empty and we didn't find the desired car, it's impossible
                std::cout << "0" << std::endl;
                return 0;
            }
            track1.pop();
            actions.push_back(2);
            actions.push_back(car);
        }
        while (!track1.empty()) {
            int top_car = track1.top();
            track1.pop();
            actions.push_back(1);
            actions.push_back(top_car);
        }

        track1.push(car);
    }

    while (!track1.empty()) {
        int top_car = track1.top();
        track1.pop();
        actions.push_back(1);
        actions.push_back(top_car);
    }

    std::cout << actions.size() / 2 << std::endl;
    for (int i = 0; i < actions.size(); i += 2) {
        std::cout << actions[i] << " " << actions[i + 1] << std::endl;
    }

    return 0;
}
