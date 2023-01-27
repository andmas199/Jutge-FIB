#include <iostream>
using namespace std;

struct Clock {
    int h;
    int m;
    int s;
};

Clock midnight() {
    Clock a;
    a.h = 0;
    a.m = 0;
    a.s = 0;
    return a;
}
void increase(Clock& r) {
    r.s = r.s+1;
    if (r.s >= 60) {
        r.s = r.s - 60;
        r.m = r.m + 1;
        if (r.m >= 60) {
            r.m = r.m - 60;
            r.h = r.h + 1;
            if (r.h >= 24) r.h = r.h - 24;
        }
    }
}
void print(const Clock& r) {
    if ( r.h < 10) cout << "0";
    cout << r.h << ":";
    if (r.m < 10) cout << "0";
    cout << r.m << ":";
    if (r.s < 10) cout << "0";
    cout << r.s << endl;
}

int main() {
    Clock a;
    cin >> a.h >> a.m >> a.s;
    print(a);
    increase(a);
    print(a);
    increase(a);
    print(a);
    a = midnight();
    print(a);
}
