#include <iostream>
#include <map>
using namespace std;

const int LIMIT = 100000000;

int main() {
    int x,y,n;

    while (cin >> x >> y >> n) {
        int cont = 1;
        map <int,int> a;
        a[n] = cont;
        bool continuar = true;

        while (continuar) {
            ++cont;
            if (n % 2 == 0) n = n/2 + x;
            else n = 3*n + y;
 
            if (n > LIMIT) {
                continuar = false;
                cout << n << endl;
            }
            else if (a.find(n) != a.end()) {
                continuar = false;
                cout << cont - a.find(n)->second << endl;
            }
            else {
                a.insert(pair<int,int>(n,cont));   
            }
        }
    }
}