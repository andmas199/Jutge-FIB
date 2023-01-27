#include <iostream>
#include <vector>
using namespace std;

bool in_vector(vector<int>& v,int puntero, int x) {
    for(int i = 0; i < puntero; ++i) {
        //cout << v[i] << " ";
        if (v[i] == x) return true;
    }
    return false;
}

void generate_cadena(vector<int>& cadena,int puntero, int limite) {
    //if(puntero > 0 and in_vector(cadena,cadena[puntero-1])) return;
    if (puntero == limite) {
        cout << "(" << cadena[0];
        for(int j = 1; j < puntero; ++j) {
            cout << "," << cadena[j];
        }
        cout << ")" << endl;
    }
    else {
        for(int i = 1; i <= limite; ++i) {
            if (not in_vector(cadena,puntero,i)) {
                //cout << endl;
                cadena[puntero] = i;
                generate_cadena(cadena,puntero + 1, limite);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> cadena(n);

    generate_cadena(cadena,0,n);
}