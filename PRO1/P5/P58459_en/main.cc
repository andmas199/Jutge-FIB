#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year(int year) {
    bool leap = false;
    if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) leap = true;
    return leap;
}

bool is_valid_date(int d,int m,int y) {
    bool is_31 = false;
    bool valid = true;
    
    if (m < 1 or m > 12) valid = false;
    else {
        if (d > 0 and d < 32){
            if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) is_31 = true;
            if (not is_31) {
                if(d > 30) valid = false;
                else {
                    if(m == 2 and is_leap_year(y) and d > 29) valid = false;
                    if(m == 2 and not is_leap_year(y) and d > 28) valid = false;
                }
            }
        }
        else valid = false;
    }
    return valid;
}

int main() {
    int d,m,y;
    cin >> d >> m >> y;
    cout << is_valid_date(d,m,y) << endl;
}
