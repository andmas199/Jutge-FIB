//Precondicion : un numero extrictamente positivo.
//Postcondicion : el digito mas grande y el mas pequeño de ese numero.
#include <iostream>
using namespace std;

void digit_maxim_i_minim (int n, int& maxim, int& minim) {
    int aux = n % 10;
    if (n < 10) {
        minim = n;
        maxim = n;
    }
    else {
        digit_maxim_i_minim (n/10, maxim, minim);
        if (aux > maxim) maxim = aux;
        if (aux < minim) minim = aux;
    }
}

int main() {
    int n,maxim = 0,minim = 9;
    cin >> n;
    digit_maxim_i_minim (n, maxim, minim);
    cout << maxim << " " << minim << endl;
    
}
