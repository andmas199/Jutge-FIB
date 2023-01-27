#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    
    if (a >= 48 and a <= 57) {cout << "digit" << endl;}
    else if ((a >= 65 and a <= 90) or (a >= 97 and a <= 122)) { cout << "lletra" << endl;}
    else cout << "res" << endl;
}
