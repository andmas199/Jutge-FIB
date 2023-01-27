#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    vector <stack <string> > v(n);
    while (cin >> m and m != -4) {
        if (m == -1) {
            int cat;
            string s;
            cin >> s >> cat;
            v[cat-1].push(s);
        }
        else if (m == -2) {
            int num,pos;
            cin >> num >> pos;
            for (int i = 0; i < num; ++i) v[pos-1].pop();
        }
        else {
            int pos;
            cin >> pos;
            int size = v[pos-1].size();
            stack <string> copia = v[pos-1];
            cout << "Pila de la categoria " << pos << endl;
            
            for (int j = 0; j < size; ++j) {
                cout << copia.top() << endl;
                copia.pop();
            }
            cout << endl;
        }
    }
}
