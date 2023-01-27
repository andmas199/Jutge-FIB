#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int p = 0, q = 0;
        while (n != 0) {
            if (n % 4 == 0 and n/4 < n/7) {
                q += n/4;
                n = 0;
            }
            else if ( n % 7 == 0) {
                p += n/7;
                n = 0;
            }
            else {
                n = n-4;
                ++q;
            }
        }
        cout << p << " " << q << endl;
    }
}
