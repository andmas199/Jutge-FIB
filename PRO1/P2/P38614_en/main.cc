#include <iostream>
using namespace std;

int main(){
    int sol = 0,n,x;
    cin >> n;
    x = n;
    
    while (n != 0){
        sol = sol + n % 10;
        n = n/100;
    }
    if (sol % 2 == 0) cout << x << " IS COOL" << endl;
    else cout << x << " IS NOT COOL" << endl;
}
