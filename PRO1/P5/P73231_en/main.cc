#include <iostream>
#include <cmath>
using namespace std;

int max4(int a, int b, int c, int d) {
    int max_def,max1,max2;
    max1 = max(a,b);
    max2 = max(c,d);
    max_def = max(max1,max2);
    return max_def;
}

int main() {
    int a,b,c,d,max_def;
    cin >> a >> b >> c >> d;
    max_def = max4(a,b,c,d);
    cout << max_def << endl;
}
