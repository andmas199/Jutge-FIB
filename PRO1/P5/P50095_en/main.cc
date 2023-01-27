//Pre: sequence of prime numbers ended with a non prime number
//Post: print the next prime number for each prime number

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    const int square = sqrt(n);
    
    if (n <= 1) return true;
    for (int i = 2; i <= square; ++i) {
        if (n % i == 0) return true;
    }
    return false;
}

int main () {
    int n;
    while (cin >> n and not is_prime(n)) {
        bool prime = true;
        while (prime) {
            n = n+1;
            prime = is_prime(n);
        }
        cout << n << endl;
    }
}
