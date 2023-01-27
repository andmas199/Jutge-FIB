#include <iostream>
using namespace std;

struct Racional {
    int num, den;
};

Racional racional(int n, int d) {
    Racional a;    
    if (n == 0) {
        a.num = 0;
        a.den = 1;
    }
    else {
        int aux,x = n,y = d;
        if (y > x) {
            aux = y;
            y = x;
            x = aux;
        }
//         cout << x << " " << y << endl;
        while(y != 0) {
            aux = y;
            y = x % y;
            x = aux;
        }
        n /= x;
        d /= x;
        if (d < 0) {
            d = -d;
            n = -n;
        }
        a.num = n;
        a.den = d;
        
    }
    return a;
}

int main() {
    int n,d;
    cin >> n >> d;
    Racional a = racional(n,d);
    cout << a.num << " " << a.den << endl;
}
