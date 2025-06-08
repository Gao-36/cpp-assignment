#include <iostream>
using namespace std;
class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) {
        hours = h + m/60;
        minutes = m % 60;
    }
    Time operator-(const Time& other) {
        int totalMins = (hours * 60 + minutes) - (other.hours * 60 + other.minutes);
        if (totalMins < 0) totalMins = 0;
        return Time(totalMins / 60, totalMins % 60);
    }
    void display() {
        cout << hours << "h " << minutes << "m" << endl;
    }
};
int main() {
    Time t1(3, 45), t2(1, 30);
    Time result = t1 - t2;
    cout << "Time difference: ";
    result.display();
    return 0;
}