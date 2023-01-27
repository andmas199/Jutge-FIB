#include <stack>
#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    stack <int> s;
    for (int i = 0; i < n/2; ++i) {
        cin >> x;
        s.push(x);
    }
    
    int j = 0;
    bool found = false;
    if (n % 2 != 0) cin >> x;
    
    while (j < n/2 and not found) {
        cin >> x;
        if (x != s.top()) found = true;
        s.pop();
        ++j;
    }
    
    if (n < 1 or found) cout << "NO" << endl;
    else cout << "SI" << endl;
}
