#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double capital,interest;
    int years;
    string a;
    cin >> capital >> interest >> years >> a;
    if (a == "compound"){
        for (int i = 0; i<years; ++i){
            capital = capital+capital*interest/100;
        }
    }
    else capital = capital + years*capital*interest/100;
    cout << capital << endl;
}
