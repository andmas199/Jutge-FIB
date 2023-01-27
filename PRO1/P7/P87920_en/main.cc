#include <iostream>
#include <vector>
using namespace std;

bool is_equal(const vector<int>& s) {
    int size = s.size();
    int suma = 0;
    if (size == 1) return false;
    else {
        for (int k = 0; k != size; ++k) {
            suma += s[k];
        }
        
        for (int j = 0; j != size; ++j) {
            suma -= s[j];
            if (s[j] == suma) return true;
            suma += s[j];
            }
        return false;
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector <int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        if ((n == 1 and s[0] == 0) or is_equal(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
