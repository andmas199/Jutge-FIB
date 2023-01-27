#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year(int year) {
    bool leap = false;
    if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) leap = true;
    return leap;
}

int main() {
    int year;
    cin >> year;
    cout << is_leap_year(year) << endl;
}
