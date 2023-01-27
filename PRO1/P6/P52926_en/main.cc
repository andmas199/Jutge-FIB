#include <iostream>
using namespace std;

void reverse (string s, bool& found) {
    while(cin >> s and not found) {
        if ( s == "end") found = true;
        reverse(s, found);
        if (s != "end") cout << s << endl;
    }
}

int main() {
    string s = "hola";
    bool found = false;
    reverse (s, found);
}
