#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

void move(Point& p1, const Point& p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

void scale(Circle& c, double sca) {
    c.radius *= sca; 
}

void move(Circle& c, const Point& p) {
    c.center.x += p.x;
    c.center.y += p.y;
}

double dist(const Point& a, const Point& b) {
    double distx = a.x - b.x;
    double disty = a.y - b.y;
    double sol;
    
    if (disty < 0) disty = -disty;
    if (distx < 0) distx= -distx;
    
    sol = sqrt(distx*distx + disty*disty);
    return sol;
}

bool is_inside(const Point& p, const Circle& c) {
    if (dist(p, c.center) > c.radius) return false;
    return true;
}

    

int main() {
    Circle a;
//     Point b;
    double sca;
    cin >> a.center.x >> a.center.y >> a.radius >> sca;
    scale(a,sca);
    cout << a.center.x << a.center.y << a.radius <<  endl;
}
