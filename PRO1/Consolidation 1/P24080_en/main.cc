#include <iostream>
using namespace std;

int main() {
    int n,cont = 0;
    
    while (cin >> n) {
        if (cont > 0) cout << endl;
        for(int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << n;
            }
            cout << endl;
        }
        ++cont;
    }
}
