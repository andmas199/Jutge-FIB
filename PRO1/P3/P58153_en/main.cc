#include <iostream>
using namespace std;

int main(){
    cout.precision(10);
    
    int n,m;
    
    while (cin >> n >> m){
        double s = 0.0;
        
        if (n == m) s = 0.0;
        else {
            for (int i = m+1 ; i <= n; ++i) s += 1.0/i;
        }
        cout << fixed << s << endl;
    }
}
