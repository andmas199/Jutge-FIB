#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

int main() {
    int n,sum = 0;
    cin >> n;
    Matrix c(n,Row(n));
    
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> c[i][j];
            if (i+j == n-1) sum += c[i][j] - 48;
            else if (i == j) sum += c[i][j] - 48;
        }
    }
    cout << sum << endl;
}

