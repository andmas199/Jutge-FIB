#include <iostream>
using namespace std;

int main(){
int x,a,b,c,d;
cin >> x >> a >> b >> c >> d;
if (((a <= x) and (x <= b)) or ((c <= x) and (x <= d))) {cout << "yes" << endl;}
else cout << "no" << endl;
}
