#include <iostream>
using namespace std;

int main() {
    int i,n, cont = 1;
    bool secuencia = false;
    cin >> i;
    
    while (not secuencia and cin >> n and n != -1) {
        if (cont == i) secuencia = true;
        ++cont;
    }
    cout << "At the position " << i << " there is a(n) " << n << "." << endl;
}
