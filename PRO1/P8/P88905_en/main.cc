#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
   Matrix sol(a.size(),vector<int>(b[0].size()));
   int sizea = a.size();
   int sizeb = b[0].size();
   int sizec = a[0].size();
//    cout << "testing" << endl;
   for (int i = 0; i < sizea; ++i) {
        for (int j = 0; j < sizeb; ++j) {
                for (int k = 0; k < sizec; ++k) {
//                     cout << "testing" << j << endl;
                    sol[i][j] = sol[i][j] + a[i][k]*b[k][j];
//                 cout << "Row" << i << j << "is: " << sol[i][j] << endl;
                    }
                }
        }
//         cout << "testing" << endl;
    return sol;
}

int main() {
    int n,p,r;
    cin >> p >> n >> r;
    Matrix a(p,vector<int>(n));
    Matrix b(n,vector<int>(r));
    
    for (int i=0; i < p; ++i) {
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
        for (int l = 0; l < r; ++l) {
            cin >> b[k][l];
        }
    }
//     cout << "testing" << endl;
//     for (int m=0; m < n; ++m) {
//         for (int c=0; c < n; ++c) {
//             cout << b[m][c];
//         }
//         cout << endl;
//     }
    for (int m = 0; m < p; ++m) {
        for (int c = 0; c < r; ++c) {
            cout << product(a,b)[m][c];
        }
        cout << endl;
    }
}
