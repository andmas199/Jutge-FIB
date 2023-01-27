#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void generate_queens(vector<bool>& col, vector<bool>& diag_desc, vector<bool>& diag_asc,int n,int fila, int& cont) {
    if(fila == n) ++cont;
    else {
        for(int columna = 0; columna < n; ++columna) {
            if(not col[columna] and not diag_desc[fila-columna+n-1] and not diag_asc[columna+fila]) {
                col[columna] = true;
                diag_desc[fila-columna+n-1] = true;
                diag_asc[fila+columna] = true;
                generate_queens(col,diag_desc,diag_asc,n,fila+1,cont);
                col[columna] = false;
                diag_desc[fila-columna+n-1] = false;
                diag_asc[fila+columna] = false;
            }
        }
    }
}

int main() {
    int n,cont = 0;
    cin >> n;
    vector<bool> columnas(n,false);
    vector<bool> diagonal_desc(2*n-1,false);
    vector<bool> diagonal_asc(2*n-1,false);
    generate_queens(columnas,diagonal_desc,diagonal_asc,n,0,cont);
    cout << cont << endl;
}