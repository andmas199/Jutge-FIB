#include <iostream>
using namespace std;

int main() {
    int num,base;
    
    while (cin >> base >> num){
        int x = 0;
        
        while (num > 0){
            num /= base;
            ++x;
        }
        cout << x << endl;
    }
 
}
