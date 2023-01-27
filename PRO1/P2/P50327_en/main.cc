#include <iostream>
using namespace std;

int main(){
int n,r,s1,s2,x1,x2;
cin >> n;
s1 = s2 = 0;
r = 0;
x1 = n;
while (n != 0) {
    r = r * 10 + n % 10;
    n /= 10;
}
for (int i = 0; x1 != 0; ++i) {
    x1 = x1 / 10;
    s1 = s1 + 1;
}
x2 = r;
for (int i = 0; x2 != 0; ++i){
    x2 = x2 /10;
    s2 = s2 +1;
}
if (s1 > s2) {
    while (s2 != s1){
        cout << "0";
        s2 = s2 + 1;
    }
}
cout << r << endl;
}
