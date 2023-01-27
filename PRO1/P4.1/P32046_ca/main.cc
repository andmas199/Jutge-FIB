#include <iostream>
using namespace std;

int main() {
    int uno,n,cont = 0;
    cin >> uno;
    cout << "nombres que acaben igual que " << uno << ":" << endl;
    while (cin >> n) {
        if (uno % 1000 == n % 1000){
            cout << n << endl;
            cont +=1;
        }
    }
    cout << "total: " << cont << endl;
}
