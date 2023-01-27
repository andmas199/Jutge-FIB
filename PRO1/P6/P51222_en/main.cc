#include <iostream>
using namespace std;

int number_of_digits(int n) {
    int cont = 1;
    if (n >= 10) {
        cont = cont+number_of_digits(n/10);
    }
    return cont;
}

int main () {
    int n;
    cin >> n;
    cout << number_of_digits(n) << endl;
}
