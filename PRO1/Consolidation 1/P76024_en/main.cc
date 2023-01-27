#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int a,b,k;
    
    while (cin >> a >> b >> k){
        double sol = 0.0;
        for (int i = 0; (a+i*k)<= b; ++i) {
            sol += 1.0/(a+i*k);
            if (1.0/(a+i*k) < 0.0001) b = 0;
        }
    cout << sol << endl;
    }
}
