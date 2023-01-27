#include <iostream>
using namespace std;

int main() {
int row,column,sol = 0;
char c;
cin >> row >> column;
for (int i = 1; i<=row; ++i){
    for (int j = 1; j <= column; ++j){
        cin >> c;
        sol = sol+c-'0';
    }
}
cout << sol << endl;
}
