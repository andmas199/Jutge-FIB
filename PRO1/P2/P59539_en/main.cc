#include <iostream>
using namespace std;

int main(){
int n;
double s;
cin >> n;
s = 0;
for (int i = 1 ; i <= n; ++i) s = s + 1.0/i;
cout.precision(4);
cout << fixed << s << endl;
}
