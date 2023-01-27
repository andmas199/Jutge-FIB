#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << is_palindrome(s) << endl;
}
