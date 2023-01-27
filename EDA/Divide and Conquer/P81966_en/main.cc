#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
    if (left <= right) {
        int medio = (left+right)/2;
        if (x == v[medio]) return medio;
        else if (x < v[medio]) return position(x,v,left,medio-1);
        else if (x > v[medio]) return position(x,v,medio+1,right);
    }
    
    return -1;
}

int main() {
    int left,right,size;
    double x;
    cin >> size >> x >> left >> right;
    vector <double> v(size);
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    cout << position(x,v,left,right) << endl;
}
