#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions(const vector <double>& v, int& p, int& q) {
    int size = v.size();
    int max = v[0];
    
    for(int i = 0; i < size; ++i) {
        if (v[i] > max) {
            p = i;
            max = v[i];
        }
    }
    
    max = v[0];
    for(int j = 0; j < p; ++j) {
        if (v[j] > max) {
            q = j;
            max = v[j];
        }
    }
}

int main() {
    cout. setf ( ios :: fixed );
    cout. precision (6);
    
    int n;
    while (cin >> n) {
        double sol = 0.0;
        int p = 0, q = 0, cont = 0;
        vector <double> v(n);
        for(int i = 0; i < n;++i) {
            cin >> v[i];
        }
        
        calcula_posicions(v,p,q);
        
        for(int j = q; j <= p; ++j) {
            sol += v[j];
            ++cont;
        }
        cout << sol/cont << endl;
    }
    
}
