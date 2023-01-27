#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
    bool found = false;
    cin >> num1 >> num2 >> num3;
    while (num3 != 0 and not found) {
        if (num1 < num2 and num2 > num3){
            if(num2 > 3143) found = true;
        }
        num1 = num2;
        num2 = num3;
        cin >> num3;
    }
    if(not found) cout << "NO" << endl;
    if(found) cout << "YES" << endl;
}
