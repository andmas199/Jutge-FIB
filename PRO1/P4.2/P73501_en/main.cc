#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ( n != 0) {
        for (int i = 0; i < n; ++i) {
            int num1,num2,cont = 0;
            cin >> num1;
            if(num1 != 0) {
                cin >> num2;
                while(num2 != 0) {
                    if(num1 < num2) cont += 1;
                    num1 = num2;
                    cin >> num2;
                }
            }
        cout << cont << endl;
        }
    }
}
