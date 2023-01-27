#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> numeros(n);
        for (int i = 0; i < n; ++i) {
            cin >> numeros[i];
        }
        for (int i = n-1; i >= 0; --i) {
            cout << numeros[i];
            if (i > 0) cout << " ";
        }
        cout << endl;
}
    }
