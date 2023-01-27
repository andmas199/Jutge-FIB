#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
   Matrix sol(a.size(),vector<int>(a.size()));
   int size = a[0].size();
   for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
                for (int k = 0; k < size; ++k) {
                    sol[i][j] = sol[i][j] + a[i][k]*b[k][j];
//                 cout << "Row" << i << j << "is: " << sol[i][j] << endl;
                    }
                }
        }
    return sol;
}

int main() {
    int n;
    cin >> n;
    Matrix a(n,vector<int>(n));
    Matrix b(n,vector<int>(n));
    
    for (int i=0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
//     for (int m=0; m < n; ++m) {
//         for (int c=0; c < n; ++c) {
//             cout << a[m][c];
//         }
//         cout << endl;
//     }
    for (int k=0; k < n; ++k) {
        for (int l = 0; l < n; ++l) {
            cin >> b[k][l];
        }
    }
//     for (int m=0; m < n; ++m) {
//         for (int c=0; c < n; ++c) {
//             cout << b[m][c];
//         }
//         cout << endl;
//     }
    for (int m=0; m < n; ++m) {
        for (int c=0; c < n; ++c) {
            cout << product(a,b)[m][c];
        }
        cout << endl;
    }
}
