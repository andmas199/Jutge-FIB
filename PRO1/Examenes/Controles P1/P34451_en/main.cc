#include <iostream>
using namespace std;

int main(){
    int x,a,sol;
    cin >> x;
    sol = 0;
    while (cin >> a) {
            if (a % x == 0) ++sol;
    }
    cout << sol << endl;
}
