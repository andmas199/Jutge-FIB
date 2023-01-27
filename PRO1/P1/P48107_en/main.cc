#include <iostream>
using namespace std;

int main(){
int a,b,r,d;
cin >> a >> b;
r= a % b;
d= (a - r) / b;
cout << d << " " << r << endl;
}
