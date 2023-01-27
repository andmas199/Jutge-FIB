#include <iostream>
using namespace std;

bool is_increasing (int n) {
    if (n % 100/10 > n % 10 and n > 9) {
        return false;
    }
    else if (n > 9) {
        n = n/10;
        return is_increasing(n);
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << is_increasing(n) << endl;
}
