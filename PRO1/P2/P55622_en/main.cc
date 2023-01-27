#include <iostream>
using namespace std;

int main(){
int n,s,x;
cin >> n;
s = 0;
x = n;
for (int i = 0; x != 0; ++i) {
    x = x / 10;
    s = s + 1;
}
if ( n == 0) s = s + 1;
cout << "The number of digits of " << n << " is " << s << "." << endl; 
}
