#include <iostream>
using namespace std;

void read_rational(int& num, int& den) {
    char x;
    cin >> num >> x >> den;
    int aux1 = num;
    int aux2 = den;
    
    while (den != 0) {
        int div = num % den;
        num = den;
        den = div;
    }
    if(num != 0){
        den = aux2/num;
        num = aux1/num;
    }
    else {
        num = aux1/den;
        den = aux2/den;
    }
}


int main() {
    int num,den;
    read_rational(num, den);
    cout << num << " " << den << endl;
}
