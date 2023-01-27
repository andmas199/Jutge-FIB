#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n,cont = 0;
    cin >> n;
    vector <int> numeros(n);
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }
    for (int i = 0; i < n-1; ++i) {
        if(numeros[i] == numeros[n-1]) ++cont;
    }
    cout << cont << endl;
}
