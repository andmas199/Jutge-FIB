#include <iostream>
using namespace std;

int main() {
    int n,num1,num2,max = 0;
    while (cin >> n) {
        cin >> num1;
        max = num1;
        for (int i = 0; i < n-1; ++i) {
            cin >> num2;
            if (max < num2) max = num2;
        }
        cout << max << endl;
    }
}
