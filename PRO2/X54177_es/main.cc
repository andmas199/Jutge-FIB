#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    
    for (int i = 0; i < n; ++i) {
        int a,suma = 0;
        while (cin >> a and a != x) {
            suma += a;
        }
        string s;
        getline(cin, s);
        cout << "La suma de la secuencia " << i+1 << " es " << suma << endl;
    }
}
