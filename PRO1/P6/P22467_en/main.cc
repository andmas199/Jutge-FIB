//Pre: a number greater or equal to 0
//Post: whether the number and the sum of its digits only contains prime numbers
#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect_prime(int n) {
    int aux = 0, aux1 = n;
    const int square = sqrt(n);
    
    if(n > 1) {
        for (int i = 2; i <= square; ++i) {
            if (n % i == 0) return false;
        }
    }
    else return false;
    
    while (n > 0) {
        aux += n % 10;
        n /= 10;
    }
    if (aux != aux1) return is_perfect_prime(aux);
    else return true;
}

int main() {
    int n;
    cin >> n;
    cout << is_perfect_prime(n) << endl;
}
