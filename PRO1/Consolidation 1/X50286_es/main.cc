#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    string a;
    
    while (cin >> a) {
     if (a == "hola") cont += 1;
    }
    cout << cont << endl;
}
