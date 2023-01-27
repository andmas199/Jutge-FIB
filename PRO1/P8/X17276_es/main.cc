#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// bool is_creciente(Matriz& A, int k, int l)

int main() {
    int m,n;
    while (cin >> m >> n) {
        int fila,columna,cont = 0;
        bool creciente = true;
        Matrix A(m, Row(n));

        for(int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        cin >> fila >> columna;
        
        while (creciente and cont < 1) {
            int k = fila, l = columna;
            //Diagonal abajo derecha;
            while(creciente and k < m-1 and l < n-1) {
                    if (A[k+1][l+1] <= A[k][l]) creciente = false;
                    ++k;
                    ++l;
            }
            k = fila;
            l = columna;
            ++cont;
            
            //Diagonal arriba derecha;
            while(creciente and k > 0 and l < n-1) {
                    if (A[k-1][l+1] <= A[k][l]) creciente = false;
                    --k;
                    ++l;
            }
            k = fila;
            l = columna;
            ++cont;
            
//             //Diagonal arriba izquierda
            while(creciente and k > 0 and l > 0) {
                    if (A[k-1][l-1] <= A[k][l]) creciente = false;
                    --k;
                    --l;
            }
            k = fila;
            l = columna;
            ++cont;
            
//             //Diagonal abajo izquierda
            while(creciente and k < m-1 and l > 0) {
                    if (A[k+1][l-1] <= A[k][l]) creciente = false;
                    ++k;
                    --l;
            }
            ++cont;
        }
        if (creciente) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
