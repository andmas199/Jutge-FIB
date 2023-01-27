/*Pre: el numero de filas y columnas de un tablero de ajedrez y el propio tablero con X 
en las posicionse donde hay alfiles y puntos en las posiciones vacias
Post: Los alfiles que se encuentran amenazados por otros alfiles. Primero la posicion 
del alfil que amenaza seguido de la posicion del amenazado.
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

int main() {
    int n,m;
    cin >> n >> m;
    Matrix A(n,Row(m));
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }
    
    //Bucle que chequea cada uno de los elementos para ver si hay un alfil.
    for(int k = 0; k < n; ++k) {
        for(int l = 0; l < m; ++l) {
            if (A[k][l] == 'X') {
                int v = k,b = l;
                bool found = false;
                
                //Bucle que comprueba la diagonal superior izquierda
                while (not found and v > 0 and b > 0) {
                    if(A[v-1][b-1] == 'X') {
                        found = true;
                        cout << "(" << k+1 << "," << l+1 << ")<->(" << v << "," << b << 
                        ")" << endl; 
                    }
                    --b;
                    --v;
                }
                v = k;
                b = l;
                found = false;
                
                //Bucle que comprueba la diagonal superior derecha
                while (not found and v > 0 and b < m-1) {
                    if(A[v-1][b+1] == 'X') {
                        found = true;
                        cout << "(" << k+1 << "," << l+1 << ")<->(" << v << "," << b+2
                        << ")" << endl; 
                    }
                    ++b;
                    --v;
                }
                v = k;
                b = l;
                found = false;
                
                //Bucle que comprueba la diagonal inferior derecha
                while (not found and v < n-1 and b < m-1) {
                    if(A[v+1][b+1] == 'X') {
                        found = true;
                        cout << "(" << k+1 << "," << l+1 << ")<->(" << v+2 << "," << 
                        b+2 << ")" << endl; 
                    }
                    ++b;
                    ++v;
                }
                v = k;
                b = l;
                found = false;
                
                //Bucle que comprueba la diagonal inferior izquierda
                while (not found and v < n-1 and b > 0) {
                    if(A[v+1][b-1] == 'X') {
                        found = true;
                        cout << "(" << k+1 << "," << l+1 << ")<->(" << v+2 << "," << 
                        b << ")" << endl; 
                    }
                    --b;
                    ++v;
                }
            }
        }
    }
}
