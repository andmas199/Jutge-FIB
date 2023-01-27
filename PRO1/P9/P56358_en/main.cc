#include <iostream>
using namespace std;

struct Time {
    int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2) {
    t1.hour = t.hour;
    t1.minute = t.minute;
    t1.second = t.second+1;
    if (t1.second >= 60) {
        t1.second = t1.second - 60;
        t1.minute = t1.minute + 1;
        if (t1.minute >= 60) {
            t1.minute = t1.minute - 60;
            t1.hour = t1.hour + 1;
            if (t1.hour >= 24) t1.hour = t1.hour - 24;
        }
    }
    
    t2.hour = t.hour;
    t2.minute = t.minute;
    t2.second = t.second - 1;
    if (t2.second < 0) {
        t2.second += 60;
        t2.minute -= 1;
        if (t2.minute < 0) {
            t2.minute += 60;
            t2.hour -= 1;
            if (t2.hour < 0) t2.hour += 24;
        }
    }
}

void print(const Time& r) {
    cout << r.hour << " ";
    cout << r.minute << " ";
    cout << r.second << endl;
}

int main() {
    Time t,t1,t2;
    while (cin >> t.hour >> t.minute >> t.second) {
        one_second(t,t1,t2);
        print(t1);
        print(t2);
    }
}
