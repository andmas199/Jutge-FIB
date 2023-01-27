#include <iostream>
using namespace std;

bool is_perfect(int n) {
    bool perfect = false;
    int num_perfecto = 1;
    if (n > 5) {
        for (int i = 2; i*i < n; ++i) {
            if ((n % i) == 0) num_perfecto += i + n/i;
        }
        if (num_perfecto == n) perfect = true;
        }
    return perfect;
}

int main () {
    int a;
    cin >> a;
    
    cout << is_perfect(a) << endl;
}
