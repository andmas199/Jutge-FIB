#include <iostream>
using namespace std;

struct Fraction {
         int num, den;   // always strictly positive
};

int mcd(int a, int b) {
    //Calculamos el mcd
    while (a != b) {
        if ( b > a) b -= a;
        else a -= b;
    }
    return a;
    
}

Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction sol;
    int num_y,num_x;
        //Multiplicamos el den y el num por el mismo numero para poder realizar la suma
        num_x = x.num*y.den;
        num_y = y.num*x.den;
        //Realizamos la suma con los denominadores nuevos
        sol.num = num_x + num_y;
        sol.den = x.den*y.den;
    return sol;
}

int main() {
    int mincd;
    Fraction sol,y;
    char c;
    cin >> sol.num >> c >> sol.den;
    while (cin >> c and c != '=') {
        cin >> y.num >> c >> y.den;
        sol = addition(sol,y);
        mincd = mcd (sol.num,sol.den);
        sol.num = sol.num/mincd;
        sol.den = sol.den/mincd;
    }
    cout << sol.num << "/" << sol.den << endl;
}
