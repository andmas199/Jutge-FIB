#include <iostream>
using namespace std;

int main() {
int ahorro,gastos,semanas,sol,ingresos;
cin >> gastos >> ahorro >> semanas;
sol = 0;
for (int i=0; i<semanas; ++i) {
    cin >> ingresos;
    ahorro = ahorro-gastos+ingresos;
    if (ahorro > 0) sol = sol+1;
}
cout << sol << endl;
}
