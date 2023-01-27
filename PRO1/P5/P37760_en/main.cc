#include <iostream>
#include <cmath>
using namespace std;

double radians(double n) {
    n = n*(M_PI/180.0);
    return n;
}

int main() {
    cout.precision(6);
    cout.setf(ios::fixed);
    double n;
    
    while (cin >> n) {
    cout << sin(radians(n)) << " " << cos(radians(n)) << endl;
    }
}
