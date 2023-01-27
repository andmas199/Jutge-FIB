#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double n, m;
    cin >> n;
    cin >> m;
    double sum = m;
    int cont = 1;
    
    while (cin >> m) {
            sum += m * pow(n,cont);
        ++cont;
    }
    cout << sum << endl;
}
