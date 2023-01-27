#include <iostream>
using namespace std;

int main() {
    int n,aux,cont = 0, sum_d = 0, sum_i = 0;
    cin >> n;
    aux = n;
    
    while (aux > 0) {
        aux /= 10;
        ++cont;
    }
    
    if (cont % 2 == 0 and n != 0) {
        for(int i = cont; i > 0; --i) {
            if (i > cont/2) sum_d += n % 10;
            else sum_i += n % 10;
            n /= 10;
        }
        if (sum_i < sum_d)cout << sum_i << " < " << sum_d << endl;
        else if (sum_i > sum_d) cout << sum_i << " > " << sum_d << endl;
        else cout << sum_d << " = " << sum_i << endl;
    }
    else cout << "nada" << endl;
}
