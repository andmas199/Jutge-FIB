#include <iostream>
using namespace std;

int main(){
int x,y;
cin >> x >> y;
if (y < x) {
    int a = x;
    x = y;
    y = a;}
while (x <= y) {
    cout << y << endl;
    y = y - 1;
    }
}
