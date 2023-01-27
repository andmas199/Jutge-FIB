#include <iostream>
using namespace std;

int main() {
    int a,b,c,x;
    char c1,c2,c3;
    cin >> a >> b >> c;
    cin >> c1 >> c2 >> c3;
    if ( c < a and c < b){
        x = a;
        a = c;
        c = x;
    }
    if ( b < a) {
        x = a;
        a = b;
        b = x;
    }
    if ( c < b) {
        x = b;
        b = c;
        c = x;
    }
    if (c1 == 'A') { cout << a << " ";}
    else if (c1 == 'B') { cout << b << " ";}
    else if (c1 == 'C') { cout << c << " ";}
    if (c2 == 'B') { cout << b << " ";}
    else if (c2 == 'A') { cout << a << " ";}
    else if (c2 == 'C') { cout << c << " ";}
    if (c3 == 'C') { cout << c << endl;}
    else if (c3 == 'A') { cout << a << endl;}
    else if (c3 == 'B') { cout << b << endl;}
}
