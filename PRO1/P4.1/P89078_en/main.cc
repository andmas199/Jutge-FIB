#include <iostream>
using namespace std;

int main() {
    int n,cont = 0;
    bool par = false;
    while (cin >> n and not par) {
        cont += 1;
        if (n % 2 == 0) {
        cout << cont << endl;
        par = true;
        }
    }
}
