#include <iostream>
using namespace std;

int sum_of_digits(int n) {
     if (n/10 == 0) return n % 10;
     else return (n % 10) + (sum_of_digits(n/10));
}

bool is_multiple_3(int n) {
    if (n > 10) return (is_multiple_3(sum_of_digits(n)));
    else {
        if (n == 0 or n == 3 or n == 6 or n == 9) return true;
        else return false;
    }
}

int main() {
    int n;
    cin >> n;
    cout << is_multiple_3(sum_of_digits(n)) << endl;
}
