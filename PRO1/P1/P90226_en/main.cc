#include <iostream>
using namespace std;

int main(){
string p1,p2;
cin >> p1 >> p2;
if (p1 < p2) {cout << p1 << " < " << p2 << endl;}
else if (p2 < p1) {cout << p1 << " > " << p2 << endl;}
else cout << p1 << " = " << p2<< endl;
}
