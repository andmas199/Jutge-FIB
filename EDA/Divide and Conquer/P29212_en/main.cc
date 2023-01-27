#include<iostream>
using namespace std;

int exp(int n, int k, int m) {
    if (k == 0) return 1;
    else {
        long aux = exp(n,k/2,m);
        if (k % 2 == 0) {
            return aux*aux % m;
        }
        if (k % 2 != 0) {
            return ((aux*aux)*n) % m;
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        int k,m;
        cin >> k >> m;
        cout << exp(n,k,m) << endl;
    }
}
//a^b % c