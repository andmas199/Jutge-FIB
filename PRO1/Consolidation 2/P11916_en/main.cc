#include <iostream>
using namespace std;

double factorial(int a) {
    if (a == 0) return 1;
    else return a*factorial(a-1);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n;
    while (cin >> n) {
        double e = 0.0;        
        for (int i = 0; i < n; ++i) {
            e += 1/factorial(i);
        }
        cout << "With " << n << " term(s) we get " << e << "." << endl;
    }
}
