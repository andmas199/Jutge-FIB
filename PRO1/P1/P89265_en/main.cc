#include <iostream>
using namespace std;

int main(){
    int a1,b1,a2,b2,s1,s2;
    cin >> a1 >> b1 >> a2 >> b2;
    if ((a1 == a2) and (b1 == b2)) {cout << "= , ";}
    else if ((a2 <= a1) and (b2 >= b1)) {cout << "1 , ";}
    else if ((a1 <= a2) and (b1 >= b2)) {cout << "2 , ";}
    else cout << "? , ";
    if ((a2>b1) or (a1>b2)) {cout << "[]" << endl;}
    else {
        s1 = max(a1, a2);
        s2 = min(b1, b2);
    cout << "[" << s1 << "," << s2 << "]" << endl;
    }
}
