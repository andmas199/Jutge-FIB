#include <iostream>
using namespace std;

void decompose(int n, int& h, int& m, int& s) {
    h = 0;
    m = n/60;
    s = n % 60;
    if (s >= 60) {
    s -= 60;
    m += 1;
    }
    if (m >= 60) {
    h = m/60;
    m = m % 60;
    }
}

int main() {
    int n,h,m,s;
    cin >> n;
    decompose(n,h,m,s);
}
