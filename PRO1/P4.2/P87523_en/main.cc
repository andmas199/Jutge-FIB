#include <iostream>
using namespace std;

int main() {
    char c1 = 'A',c2 = 'A',c3 = 'A',c4 = 'A',c5 = 'A';
    bool found = false;
    cin >> c5;
    while(not found and c5 != '.') {
        if(c1 == 'h' and c2 == 'e' and c3 == 'l' and c4 == 'l' and c5 == 'o') {
            found = true;
        }
        c1 = c2;
        c2 = c3;
        c3 = c4;
        c4 = c5;
        cin >> c5;
    }
    if (not found) cout << "bye" << endl;
    else cout << "hello" << endl;
}
