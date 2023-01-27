#include <iostream>
using namespace std;

bool is_increasing (int n) {
    if (n % 100/10 > n % 10 and n > 9) {
        return false;
    }
    else if (n > 9) {
        n = n/10;
        return is_increasing(n);
    }
    return true;
}

int engrosa(int x) {
    int m;
    if (x < 10) m = x;
    else{
        
            int v = x % 10;
            int w = (x % 100) / 10;
            if( w > v) {
                m = engrosa (x / 10) * 10 + w;
            }
            else {
                m = engrosa (x /10) * 10 + v;
            }
    }
    if (not is_increasing(m)) return engrosa(m);
    else return m;

}

int main () {
    int n;
    cin >> n;
    cout << engrosa(n) << endl;
}
