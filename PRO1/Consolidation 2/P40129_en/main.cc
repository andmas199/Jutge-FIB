#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector <char> s(10);
    
    while (cin >> s[0]) { 
        for (int i = 1; i < 10; ++i) {
            cin >> s[i];
        }
        
        int j = -1;
        bool found = false;
        while (not found) {
            ++j;
            if (s[j] == '?') found = true;
        }
        
        int sum = 0;
        int pos = 0;
        for (int k = 0; k < 10; ++k) {
            if (s[k] != '?') {
                if (s[k] == 'X') {
                    sum += 10*(10-k);
                }
                else sum += (int(s[k])-48)*(10-k);
            }
            else pos = -(k-10);
        }
        
        int l = 0;
        bool found_l = false;

        while(l < 11 and not found_l) {
            if (((sum + (l*pos)) % 11) == 0) {
                found_l = true;
                if (l == 10) cout << "X" << endl;
                else cout << l << endl;
            }
            ++l;
        }
    }
}
