#include <iostream>
using namespace std;

int gcd(int a, int b) {
        if (a < b) {
            int aux = a;
            a = b;
            b = aux;
        }
        if (b == 0) return a;
        else if (a % b != 0) return gcd(b, a % b) ;
        else return b;
}

int main() {
    int n,m;
    cin >> n >> m;
    cout << gcd(n,m) << endl;
}
