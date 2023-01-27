#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double dist(const Point& a, const Point& b) {
    double distx = a.x - b.x;
    double disty = a.y - b.y;
    double sol;
    
    if (disty < 0) disty = -disty;
    if (distx < 0) distx= -distx;
    
    sol = sqrt(distx*distx + disty*disty);
    return sol;
}
    

int main() {
    Point a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    cout << dist(a,b) << endl;
}
