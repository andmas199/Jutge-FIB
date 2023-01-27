#include <iostream>
using namespace std;

int main(){
cout.setf(ios::fixed);
cout.precision(2);
double num,sum1 = 0,sum2 = 0;
cin >> num;
for (int i = 1; i <= num; ++i){
    double x;
    cin >> x;
    sum1 = sum1+x*x;
    sum2 = sum2+x;
}
cout << ((1 / (num-1))*sum1)-(1/(num*(num-1))*sum2*sum2) << endl;
}
