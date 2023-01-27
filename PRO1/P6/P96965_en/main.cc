#include <iostream>
using namespace std;

int reduction_of_digits(int x) {
    int sum = x % 10;
    x = x/10;
    if (x != 0) sum += reduction_of_digits(x);
    if (sum > 9){
        sum = reduction_of_digits(sum);
    }
    return sum;
}

int main() {
    int x;
    cin >> x;
    cout << reduction_of_digits(x) << endl;
}
