#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(int& a, int& b) {
    return a > b;
}

int main() {
    int size;
    while (cin >> size) {
        vector <int> v(size);
        
        for (int i = 0; i < size; ++i) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end(), com);
        
        for (int j = 0; j < size; ++j) {
            cout << v[j];
            if ( j != size - 1) cout << " ";
        }
        cout << endl;
    }
}
