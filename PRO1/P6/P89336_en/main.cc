#include <iostream>
using namespace std;

int escriu(int n) {
    int ntot;
    string s;
    if (cin >> s) {
        ntot = escriu(n + 1);
        if (n < ntot/2) cout << s << endl;
    }
    else ntot= n;
    return ntot;
}

int main() {
    escriu(0);
}
