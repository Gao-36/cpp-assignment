#include <iostream>
using namespace std;
class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) {
        hours = h + m/60;
        minutes = m % 60;
    }
    Time operator+(const Time& other) {
        int totalMins = minutes + other.minutes;
        int totalHours = hours + other.hours + totalMins/60;
        return Time(totalHours, totalMins % 60);
    }
    void display() {
        cout << hours << "h " << minutes << "m" << endl;
    }
};
int main() {
    Time t1(2, 45), t2(3, 30);
    Time result = t1 + t2;
    cout << "Total time: ";
    result.display();
    return 0;
}