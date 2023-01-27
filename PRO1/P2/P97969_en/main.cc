#include <iostream>
using namespace std;

int main() {
char x;
int sol;
sol = 0;
while ((cin >> x) and (x != '.')){
    if (x == 'a') ++sol;
}
cout << sol << endl;
}
