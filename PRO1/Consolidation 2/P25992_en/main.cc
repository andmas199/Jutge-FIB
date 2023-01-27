#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(int a, int b) {
    return a > b;
}

int main() {
    int n;
    vector <int> par;
    vector <int> impar;
    
        while(cin >> n) {
        if (n != 0) {
            if(n % 2 == 0) par.push_back(n);
            else impar.push_back(n);
        }
        else {
            int par_size = par.size(), impar_size = impar.size();
            sort(par.begin(), par.end());
            sort(impar.begin(), impar.end(), com);
            
            for(int i = 0; i < par_size; ++i) {
                cout << par[i];
                if (i != par_size -1) cout << " ";
            }
            cout << endl;
            for(int j = 0; j < impar_size; ++j) {
                cout << impar[j];
                if (j != impar_size -1) cout << " ";
            }
            cout << endl;
            
            par.clear();
            impar.clear();
        }
    }
}
