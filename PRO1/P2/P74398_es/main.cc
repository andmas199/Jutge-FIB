#include <iostream>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    for (int i = 2; i<=16; ++i){
        s = 0;
        int x = n;
        while (x >= i) {
            x = x/i;
            s = s+1;
        }
    cout << "Base " << i << ": " << s+1 << " cifras." << endl;
    }
}
