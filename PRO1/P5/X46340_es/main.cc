#include <iostream>
#include <cmath>
using namespace std;

int sum_min_max(int x, int y, int z) {
    int sum,mini,maxi;
    mini = min(x,y);
    maxi = max(x,y);
    mini = min(mini,z);
    maxi = max(maxi,z);
    sum = mini + maxi;
    return sum;
}

int main() {
    int x,y,z,sum;
    cin >> x >> y >> z;
    sum = sum_min_max(x,y,z);
    cout << sum << endl;
}
