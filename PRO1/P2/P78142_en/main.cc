#include <iostream>
#include <cmath>
using namespace std;

int main(){
cout.precision (2);
double x,sol = 0,n = 0;
while (cin >> x){
    ++n;
    sol = x+sol;
}
cout << fixed << sol/n << endl;
}
