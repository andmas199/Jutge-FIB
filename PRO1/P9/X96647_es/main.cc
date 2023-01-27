//Pre: una serie de vectores que contienen puntos de un eje de coordenadas.
//Post: el baricentro de los puntos de cada uno de los vector seguido de si es o no 
//normalizado, y, si no lo es ,indicando por que no`.
#include <iostream>
#include <vector>
using namespace std;

struct Punto {
    double x,y;
};

bool baricentro (const vector<Punto>& v, Punto& b) {
    int size = v.size();
    for (int j = 0; j < size; ++j) {
        if (b.x == v[j].x and b.y == v[j].y) return true;
    }
    return false;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2); 
    int n;
    while (cin >> n) {
        int j = 0;
        double suma_x = 0.0, suma_y = 0.0;
        Punto bari;
        bool is_different = false;
        vector <Punto> points(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> points[i].x >> points[i].y;
            suma_x += points[i].x;
            suma_y += points[i].y;
        }
        bari.x = suma_x/n;
        bari.y = suma_y/n;
        
        cout << "baricentro: (" << bari.x << "," << bari.y << ")" << endl;
        
        while(not is_different and j < n-1) {
            if (points[j].x != points[j+1].x) is_different = true;
            if (points[j].y != points[j+1].y) is_different = true;
            ++j;
        }
        if (not is_different) {
            cout << "el vector no cumple la propiedad 1" << endl;
        }
        
        else if (suma_x != suma_y) {
            cout << "el vector no cumple la propiedad 2" << endl;
        }
        
        else if (baricentro(points, bari)) cout << "el vector no cumple la propiedad 3"
            << endl;
        else cout << "vector normalizado" << endl;
    }
}
