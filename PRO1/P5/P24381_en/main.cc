#include <iostream>
using namespace std;

void cross(int n, char c) {
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == n/2 or i == n/2) cout << c;
            else if ( j < n/2) cout << " ";
        }
        cout << endl;
    }

}

int main() {
    int n;
    char c;
    cin >> n >> c;
    cross(n,c);
}
