#include <iostream>
#include <vector>
using namespace std;

int main() {
    typedef vector<int> Row;   
    typedef vector<Row> Matrix;
    
    int n,m;
    cin >> n >> m;
    Matrix my_matrix(n,Row(m));
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> my_matrix[i][j];
        }
    }
    
    int x,y;
    string s;
    while (cin >> s) {
        if (s == "row") {
            cin >> x;
            cout << s << " " << x << ":";
            for (int k = 0; k < m; ++k) cout << " " << my_matrix[x-1][k];
        }
        else if (s == "column") {
            cin >> x;
            cout << s << " " << x << ":";
            for (int k = 0; k < n; ++k) cout << " " << my_matrix[k][x-1];
        }
        else if (s == "element") {
            cin >> x >> y;
            cout << s << " " << x << " " << y << ": " << my_matrix[x-1][y-1];
        }
        cout << endl;
    }
}
