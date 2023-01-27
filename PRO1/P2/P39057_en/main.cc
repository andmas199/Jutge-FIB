#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n;
cin >> n;

for (int i = 0; i < n; ++i){
    string figura;
    cin >> figura;
    
    double b,h;
    if (figura == "rectangle"){
        cin >> b >> h;
        cout.precision(6);
        cout << fixed << b*h << endl;
    }
    else {
        cin >> h;
        cout.precision(6);
        cout << fixed << M_PI*h*h << endl;
    }
}
}
