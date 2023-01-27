#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> mat;

mat mat_mul(mat& A, mat& B, int m) {
    mat res(2,vector<int>(2));
    res[0][0] = (A[0][0] * B[0][0] + A[0][1]*B[1][0]) % m;
    res[0][1] = (A[0][0] * B[0][1] + A[0][1]*B[1][1]) % m;
    res[1][0] = (A[1][0] * B[0][0] + A[1][1]*B[1][0]) % m;
    res[1][1] = (A[1][0] * B[0][1] + A[1][1]*B[1][1]) % m;

    return res;
}

mat mat_exp(mat& A ,int n ,int m) {
    mat aux {{1,0},{0,1}};
    if (n == 0 or A == aux) return aux;
    else if (n == 1) return mat_mul(A,aux,m);
    else if (n % 2 == 0) {
        mat B = mat_mul(A,A,m);
        return mat_exp(B,n/2,m);
        
    }
    else {
        mat B = mat_mul(A,A,m);
        mat C = mat_exp(B,n/2,m);
        return mat_mul(C,A,m);
        
    }
}



int main() {
    mat A(2,vector<int>(2));
    int n,m;

    while (cin >> A[0][0]) {
        cin >> A[0][1];
        cin >> A[1][0];
        cin >> A[1][1];
        cin >> n >> m;

        A = mat_exp(A,n,m);

        cout << A[0][0] << " ";
        cout << A[0][1] << endl;
        cout << A[1][0] << " ";
        cout << A[1][1] << endl;
        cout << "----------" << endl;
    }
}