#include <iostream>
using namespace std;

int main(){
    int a,b,sol = 0;
    while (cin >> a >> b){
        for (int i=a; i<=b; ++i) {
            sol = sol + i*i*i;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ": "<< sol << endl;
        sol = 0;
    }
}
