#include <iostream>
using namespace std;

int main() {
    int n, a = 1, m = 0, cont = 0;
    bool found = false;
    cin >> n;
    while (cont < n*2 - 1) {
        for(int i = 0; i < n-a; ++i) {
            cout << " ";
        }
        for(int j = 0; j < 1 + 2*m; ++j) {
            cout << "*";
        }
        ++cont;
        if (cont == n) found = true;
        if(not found) {
            ++a;
            ++m;
        }
        else {
            --a;
            --m;
        }
        cout << endl;
    }
}
