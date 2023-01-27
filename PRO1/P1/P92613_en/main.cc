#include <iostream>
using namespace std;

int main(){
    double x;
    int a;
    cin >> x;
    a=x;
    if (a == x) {cout << a << " " << a << " " << a << endl;}
    else {
        cout << a <<  " " << a+1 << " ";
        a=x+0.5;
        cout << a << endl;
    }
}
