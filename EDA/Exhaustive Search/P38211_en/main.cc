#include <iostream>
#include <vector>
using namespace std;

vector<bool> col;
vector<bool> diag_desc;
vector<bool> diag_asc;

bool written = false;

void write_queens(vector<int>& pos_queens,int n) {
    written = true;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) {
            if(pos_queens[i] == j) cout << "Q";
            else cout << ".";
        }
        cout << endl;
    }
}

void generate_queens(vector<int>& pos_queens,int n,int fila,int& cont) {
    if(fila == n) {
        if(not written) write_queens(pos_queens,n);
        ++cont;
    }
    else if(not written) {
        for(int columna = 0; columna < n; ++columna) {
            if(not col[columna] and not diag_desc[fila-columna+n-1] and not diag_asc[columna+fila]) {
                col[columna] = true;
                diag_desc[fila-columna+n-1] = true;
                diag_asc[fila+columna] = true;
                pos_queens[fila] = columna;
                generate_queens(pos_queens,n,fila+1,cont);
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
    col = vector<bool>(n,false);
    diag_asc = diag_desc = vector<bool>(2*n-1,false);
    vector<int> pos_queens(n);
    generate_queens(pos_queens,n,0,cont);
    if (cont == 0) cout << "NO SOLUTION" << endl;
}