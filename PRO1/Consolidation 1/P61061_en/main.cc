#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 10) cout << "The product of the digits of " << n << " is " << n << "." 
            <<endl; 
        else {
            while (n > 9) {
                int mult = 1;
                cout << "The product of the digits of " << n << " is ";
                while (n > 0) {
                    mult *= n % 10;
                    n /= 10;
                }
                cout << mult << "." << endl;
                n = mult;
            }
        }
        cout << "----------" << endl;
    }
}
