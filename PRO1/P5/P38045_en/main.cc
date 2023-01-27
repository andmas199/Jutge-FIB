#include <iostream>
#include <cmath>
using namespace std;

double square(int n) {
    cout.precision(6);
    cout <<fixed << sqrt(n) << endl;
    return n;
}

int main() {
    double n;
    
    while (cin >> n) {
    cout.precision(0);
    cout << fixed << n*n << " ";
    square(n);
    }
}
