#include <iostream>
using namespace std;

int main(){
int h,m,s;
cin >> s;
h = 0;
m = 0;
if (s >= 3600) {(h = s/3600) and (s = s % 3600);}
if (s >= 60) {(m = s/60) and (s = s % 60);}
cout << h << " " << m << " " << s << endl;
}
