#include <iostream>
using namespace std;

int main() {
    int a,b,s;
    while (cin >> a >> b) {
        if (b == 0) s = 1;
        else{
            s = a;
            for (int i = 1; i < b; ++i){
                s = s*a;
            }
        }
        cout << s << endl;
    }
}
