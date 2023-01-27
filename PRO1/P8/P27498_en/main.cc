#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void transpose(Matrix& matriz) {
    int aux;
    int size = matriz[1].size();
    for (int i = 0; i < size; ++i) {
        for(int j = 0; j < i; ++j) {
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}

int main() {
    int n;
    cin >> n;
    Matrix matriz(n,Row(n));
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
    transpose(matriz);
}
