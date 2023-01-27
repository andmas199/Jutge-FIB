#include <iostream>
using namespace std;

int main(){
int n,r;
cin >> n;
r = 0;
if (n >= 1) {
    while (n >= 16) {
        r = n % 16;
        n = n / 16;
        if (r == 10) cout << "A";
        else if (r == 11) cout << "B";
        else if (r == 12) cout << "C";
        else if (r == 13) cout << "D";
        else if (r == 14) cout << "E";
        else if (r == 15) cout << "F";
        else cout << r;
        
    }
    if (n == 10) cout << "A";
    else if (n == 11) cout << "B";
    else if (n == 12) cout << "C";
    else if (n == 13) cout << "D";
    else if (n == 14) cout << "E";
    else if (n == 15) cout << "F";
    else cout << n;
}
else {
    r = 0;
    cout << r;
}
cout << endl;
}
