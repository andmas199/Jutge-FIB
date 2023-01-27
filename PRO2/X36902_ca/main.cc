#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack <char> s;
    char c;
    bool found = false;
    while (cin >> c and c != '.' and not found) {
        if (s.empty() and (c == ')' or c == ']')) found = true;
        else if (c == '(' or c == '[') {
            s.push(c);
        }
        else if (s.top() == '(' and c == ')') s.pop();
        else if (s.top() == '[' and c == ']') s.pop();
        else found = true;
    }
    if (not s.empty()) found = true; 
    if (not found) cout << "Correcte" << endl;
    else cout << "Incorrecte" << endl;
}
