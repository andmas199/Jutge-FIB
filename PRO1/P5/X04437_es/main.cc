#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
    double dist;
    dist = sqrt(x*x + y*y);
    return dist;
}

int main() {
    double x,y,dist;
    cin >> x >> y;
    dist = dist_or(x,y);
    cout << dist << endl;
}
