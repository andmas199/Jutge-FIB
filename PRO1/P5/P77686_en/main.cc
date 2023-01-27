#include <iostream>
using namespace std;

bool is_palindromic (int n) {
    int aux = 0,aux1 = n;
    while (n != 0) {
        aux = aux*10 + n % 10;
        n /= 10;
    }
    return (aux == aux1);
}

int main() {
    int n;
    cin >> n;
    
    if(is_palindromic(n)) cout << "It is" << endl;
    else cout << "It's not" << endl;
}
