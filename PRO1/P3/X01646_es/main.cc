#include <iostream>
using namespace std;

int main(){
    int base,num;
    cin >> base;
    
    while (cin >> num) {
        cout << num;
        int sum = 0;
        for (int i = 0; num != 0 ; ++i) {
            sum += num % base;
            num /=  base;
//             cout << num % base << endl;
        }
        cout << ": " << sum << endl;
    }
}
