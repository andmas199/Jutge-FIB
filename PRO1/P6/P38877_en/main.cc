#include <iostream>
using namespace std;

void reverse (string s, int& n) {
    while(cin >> s) {
        reverse(s, n);
        n = n -1;
        if (n >= 0) cout << s << endl;
    }
}

int main() {
    string s = "hola";
    int n;
    cin >> n;
    reverse (s, n);
}
