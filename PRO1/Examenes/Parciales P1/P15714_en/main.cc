#include <iostream>
#include <vector>
using namespace std;

int main() {
    char c;
    int cont_s = 0, cont_m = 0, cont_l = 0, cont = 0;
    bool found = false;
    
    while (not found and cin >> c) {
        if (c != '-' and c != '.') {
            ++cont;
        }
        else {
            if (cont > 0 and cont < 5) ++cont_s;
            else if (cont >= 5 and cont <= 9) ++cont_m;
            else if (cont > 9) ++cont_l;
            cont = 0;
        }
        if (c == '.') found = true;
    }
    cout << cont_s << "," << cont_m << "," << cont_l << endl;
}
