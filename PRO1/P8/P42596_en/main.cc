#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int sizea = mat.size();
    int sizeb = mat[0].size();
    for(int i = 0; i < sizea; ++i) {
        for(int j = 0; j < sizeb; ++j) {
            if (mat[i][j] < minimum) minimum = mat[i][j];
            else if (mat[i][j] > maximum) maximum = mat[i][j];
        }
    }
    
}

int main() {
    int n,m,minimum,maximum,diferencia,sol_min = 0,cont = 0,cont_def = 1;
    
    while ( cin >> n >> m) {
        Matrix mat(n, vector<int>(m));
        ++cont;
        for (int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }
        minimum = maximum = mat[0][0];
        min_max(mat, minimum, maximum);
        diferencia = maximum - minimum;
        if (diferencia > sol_min) {
            sol_min = diferencia;
            cont_def = cont;
        }
    }
    cout << "la diferencia maxima es " << sol_min << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << cont_def << endl;
}
