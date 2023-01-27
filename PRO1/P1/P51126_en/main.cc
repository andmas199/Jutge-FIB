#include <iostream>
using namespace std;

int main(){
int a1,b1,a2,b2,s1,s2;
cin >> a1 >> b1 >> a2 >> b2;
if ((a2>b1) or (a1>b2)) {cout << "[]" << endl;}
else {
s1 = max(a1, a2);
s2 = min(b1, b2);
cout << "[" << s1 << "," << s2 << "]" << endl;
}
/*if ((a1 >= a2) and (a1 <= b2)) {s1 = a1;}
else if ((b1 >= b2) and (b1 <= a2)) {s1 = b1;}
else if ((a1 <= a2) and (a1 <= b2)) {s1 = a2;}
else if ((a1 <= a2) and (b1 >= b2)) {s2 = b2;}
else if (a1 == b2) {s2 = a1;}
else cout << "[]" << endl;*/
}
