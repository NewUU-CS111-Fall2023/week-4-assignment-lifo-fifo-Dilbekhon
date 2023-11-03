#include <iostream>

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

Day calculateFutureDay(Day today, int numDays) {
    int futureDay = (today + numDays) % 7;
    return static_cast<Day>(futureDay);
}

std::string getDayName(Day day) {
    std::string dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return dayNames[day];
}

int main() {
    Day today = Thursday;
    int numDays = 98;

    Day futureDay = calculateFutureDay(today, numDays);
    std::string futureDayName = getDayName(futureDay);

    std::cout << "Today is " << getDayName(today) << std::endl;
    std::cout << "After " << numDays << " days, it will be " << futureDayName << std::endl;

    return 0;
}
