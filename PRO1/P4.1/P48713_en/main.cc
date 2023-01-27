#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int size;
    cin >> size;

    for (int i = 0; i < size; ++i) {
        int n;
        cin >> n;

        bool found = false;
        int div = 2;
        while (not found and div <= sqrt(n)) {
            if (n%div == 0) found = true;
            ++div;
        }

        if (found or n <= 1) cout << n << " is not prime" << endl;
        else                 cout << n << " is prime" << endl;
    }
}
