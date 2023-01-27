#include <iostream>
#include <vector>
using namespace std;

void generate_one_zero(vector<int> cadena, int puntero) {
    if(puntero == cadena.size()) {
        for(int i = 0; i < puntero; ++i) {
            cout << cadena[i];
            if(i < puntero -1)cout << " ";
        }
        cout << endl;
    }
    else {
        //cerr << puntero << endl;
        cadena[puntero] = 0; generate_one_zero(cadena,puntero+1);
        //cout << "puntero: " << puntero << endl;
        cadena[puntero] = 1; generate_one_zero(cadena,puntero+1);
    }
}


void one_zero(int n) {
    vector<int> cadena(n);
    int puntero = 0;
    generate_one_zero(cadena,puntero);
}

int main() {
    int n;
    cin >> n;
    one_zero(n);
}