#include <iostream>
using namespace std;

int main() {
    int n, cont = 0, sum_p = 0, sum_i = 0;
    cin >> n;
    
    while(n > 0) {
        if(cont % 2 == 0) sum_i += n % 10;
        else sum_p += n % 10;
        n /= 10;
        ++cont;
    }

    cout << sum_i << " " << sum_p << endl;
    if (sum_i == 0 ) cout << "0 = " << sum_i << " * " << sum_p << endl;
    else if (sum_p == 0) cout << "0 = " << sum_p << " * " << sum_i << endl;
    else if (sum_i <= sum_p and (sum_p % sum_i) == 0) cout << sum_p << " = " << sum_p/
        sum_i << " * " << sum_i << endl;
    else if (sum_p < sum_i and (sum_i % sum_p) == 0) cout << sum_i << " = " << sum_i/
        sum_p << " * " << sum_p << endl;
    else cout << "ninguna" << endl;
}
