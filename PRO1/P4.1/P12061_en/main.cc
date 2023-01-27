#include <iostream>
using namespace std;

int main() {
    string n;
    int cont = 0;
    bool beginning = false, end = false;
    
    while (not end and cin >> n) {
        if (n == "beginning") beginning = true;
        if ( n == "end") end = true;
        if (beginning and not end) ++cont;
    }
    if (beginning and end) cout << cont-1 << endl;
    else cout << "wrong sequence" << endl;
}
