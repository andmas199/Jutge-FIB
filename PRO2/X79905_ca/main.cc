#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, int> rep;
    string comando;
    while (cin >> comando) {
        string palabra;
        cin >> palabra;
        if (comando == "a") rep[palabra]++;
        else if (comando == "e" and rep[palabra] != 0) rep[palabra]--;
        else if (comando == "f") cout << rep[palabra] << endl;
    }
}
