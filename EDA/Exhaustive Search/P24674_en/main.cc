#include <iostream>
#include <vector>
using namespace std;

bool in_vector(vector<string>& v,int puntero, string x) {
    for(int i = 0; i < puntero; ++i) {
        //cout << v[i] << " ";
        if (v[i] == x) return true;
    }
    return false;
}

void leer_palabras(vector<string>& palabras, int n) {
    for(int i = 0; i < n; ++i) {
        cin >> palabras[i];
    }
}

void generate_cadena(vector<string>& cadena,vector<string>& palabras, int puntero, int limite) {
    //if(puntero > 0 and in_vector(cadena,cadena[puntero-1])) return;
    if (puntero == limite) {
        cout << "(" << cadena[0];
        for(int j = 1; j < puntero; ++j) {
            cout << "," << cadena[j];
        }
        cout << ")" << endl;
    }
    else {
        for(int i = 0; i < limite; ++i) {
            if (not in_vector(cadena,puntero,palabras[i])) {
                //cout << endl;
                cadena[puntero] = palabras[i];
                generate_cadena(cadena,palabras,puntero + 1, limite);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> cadena(n);
    vector<string> palabras(n);

    leer_palabras(palabras,n);

    generate_cadena(cadena,palabras,0,n);
}