#include <iostream>
using namespace std;

int main() {
    int i,n, cont = 1;
    bool secuencia = false;
    cin >> i;
    
    while (not secuencia and cin >> n) {
        if (cont == i) secuencia = true;
        ++cont;
    }
    if (secuencia) {
    cout << "At the position " << i << " there is a(n) " << n << "." << endl;
    }
    else cout << "Incorrect position." << endl;
}
