#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(const vector<int>& s) {
    int size = s.size();
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            int cont = 0;
            int sum = s[i] + s [j];
            for (int k = 1; k <= sqrt(sum); ++k) {
                if (sum % k == 0) ++cont; 
            }
            if (cont == 1) return true;
        }
    }
    return false;
}


int main() {
    int n;
    while (cin >> n) {
        vector <int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        if (is_prime(s)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
