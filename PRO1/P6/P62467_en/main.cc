#include <iostream>
using namespace std;

void asterisk(int n, int cont,int total) {
    cout << "*";
    int aux = cont;
    while(aux % 2 == 0 and aux > 0) {
        cout << "*";
        aux /= 2;
    }
    cout << endl;
    if (cont < total) asterisk(n, cont+1, total);
}

int main () {
    int n,total = 1, cont = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        total *= 2;
    }
    total -= 1;
    asterisk(n,cont, total);
}
