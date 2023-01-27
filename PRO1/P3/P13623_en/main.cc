#include <iostream>
using namespace std;

int main() {
    int row,columns,suma = 0;
    cin >> row >> columns;
    char c;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < columns; ++j){
            cin >> c;
            if (i % 2 == 0 and j % 2 == 0) suma += c - '0';
            else if ( i % 2 != 0 and j % 2 != 0) suma += c - '0';
        }
    }
    cout << suma << endl;
}
