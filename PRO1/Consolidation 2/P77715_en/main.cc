#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v(26,0);
    char c;
    
    while (cin >> c) {
        if (c == '.') {
            bool found = false;
            for(int i = 0; i < 26; ++i) {
                if (v[i] == 0) found = true;
                v[i] = 0;
            }
    
            if (found) cout << "NO" << endl;
            else cout << "YES" << endl;
            
        }
        else if (97 <= c and c <= 122) {
            ++v[c-97];
        }
        else if (65 <= c and c <= 90) {
            ++v[c-65];
        }
    }
}
