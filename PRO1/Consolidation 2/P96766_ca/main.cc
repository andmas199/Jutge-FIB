#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool es_palindrom(string s) {
    int size = s.size();
    for(int i = 0; i < size/2; ++i) {
        if (s[i] != s[size - 1 - i]) return false;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n and n!= 0) {
        cout << "-----" << endl;
        vector <string> v(n);
        vector <bool> palindrome(n, false);
        int max = 0, cont = 0;
        
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            if (es_palindrom(v[i])) {
                if (v[i].size() > max) max = v[i].size();
                palindrome[i] = true;
                ++cont;
            }
        }
        if (cont != 0) {
            for(int j = 0; j < n; ++j) {
                if (palindrome[j] and v[j].size() == max) cout << v[j] << endl;
            }
        }
        else cout << "cap palindrom" << endl;
    }
    cout << "-----" << endl;
}
