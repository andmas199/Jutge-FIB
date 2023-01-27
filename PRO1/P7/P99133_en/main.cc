#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <string> s(n);
    
    for (int i = 0; i < n; ++i) cin >> s[i];
        
    for (int j = n-1; j >= 0; --j) {
        for (int k = s[j].size()-1; k >= 0; --k) cout << s[j][k];
        cout << endl;
    }
}
