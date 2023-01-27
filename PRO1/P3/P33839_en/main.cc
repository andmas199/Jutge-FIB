#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){
        int sol = 0;
        cout << "The sum of the digits of " << n << " is ";
        while (n != 0) {
            sol += n % 10;
            n /= 10;
        }
        cout << sol << "." << endl;
    }
}
