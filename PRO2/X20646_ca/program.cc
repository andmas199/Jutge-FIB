#include <iostream>
#include "BinTreeIOParInt.hh"
using namespace std;

ParInt search_tree (const BinTree <ParInt>& a, int n, int& cont, bool& found) {
    ParInt b;
    if (not a.empty() and n == a.value().primer()) {
        found = true;
        ParInt c(a.value().segon(), cont);
        b = c;
        return b;
    }
    else if (not a.empty()) {
        ++cont;
        b = search_tree (a.left(),n, cont, found);
        if (not found) b = search_tree (a.right(),n, cont, found);
        --cont;
    }
    
    return b;
}

int main() {
    int num;
    BinTree <ParInt> x;
    read_bintree_parint(x);
//     write_bintree_parint(x);
    while (cin >> num) {
        int cont = 0;
        bool found = false;
        ParInt sol = search_tree (x, num, cont, found);
        if (found) cout << num << " " << sol.primer() << " " << sol.segon() << endl;
        else cout << "-1" << endl;
    }
}
