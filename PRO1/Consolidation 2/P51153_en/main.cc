#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        bool par = false;
        bool impar = false;
        
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] % 2 == 0) par = true;
            else impar = true;
        }
        if (par and impar) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
