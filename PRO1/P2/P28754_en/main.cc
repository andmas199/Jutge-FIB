#include <iostream>
using namespace std;

int main(){
int n,r;
cin >> n;
r = 0;
if (n >= 1) {
    while (n != 1) {
        r = n % 2;
        n = n / 2;
        cout << r;
    }
    cout << n;
}
else {
    r = 0;
    cout << r;
}
cout << endl;
}
