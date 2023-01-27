//Pre: dos secuencias acabadas en 0
//Post: el numero maximo de la primera secuencia y la posicion en la que aparece en ambas secuencias
#include <iostream>
using namespace std;

void infoSecuencia(int& max, int& lpos) {
    int n,cont = 1;
    cin >> n;
    while (n != 0) {
        cont += 1;
        if (n >= max) {
            max = n;
            lpos = cont;
        }
        cin >> n;
    }
}

int main() {
    int max,lpos = 1,cont = 1, n;
    cin >> max;
    
    infoSecuencia(max, lpos);
    cin >> n;
    while (n != max and n != 0) {
        cin >> n;
        cont += 1;
    }
    cout << max << " " << lpos << " ";
    if ( n!= max) cout << "-" << endl;
    else cout << cont << endl;
}
