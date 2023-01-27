// Pre: k > 0 and a text made of lowercase letters with words separated by '_' and ended with a dot.
// Post: a encripted text made of uppercase letters and with spaces instead of '_'.
#include <iostream>
using namespace std;

int main() {
    char c;
    int k;
    
    while (cin >> k) {
        cin >> c;
        k = k% 26;
        while (c != '.') {
            if (c > 96 and c < 123) {
                    c = c - 32;
                    for (int i = 0; i < k; ++i) {
                        c += 1;
                        if (c > 90) c = 'A';
                    }
                }
            else if (c == '_') c = 32;
            cout << c;
            cin >> c;
        }
        cout << endl;
    }
}
