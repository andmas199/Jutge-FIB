#include <iostream>
using namespace std;

int main() {
    int n,m,x = 9;
    bool start = true;
    while (cin >> n >> m) {
        if (not start) cout << endl;
        for (int i = 0; i < n; ++i){
            cout << x;
            x = x - 1;
            if (x < 0) x = 9;
            start = false;
            for (int j = 1; j < m; ++j){
                    cout << x;
                    x = x -1;
                    if (x < 0) x = 9;
            }
            cout << endl;
        }
        x = 9;
    }
}
