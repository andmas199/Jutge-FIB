#include <iostream>
using namespace std;

int main(){
 char a;
 cin >> a;
 if(int(a)<=90) {cout << char(a+32) << endl;}
 if(int(a)>=97) {cout << char(a-32) << endl;}
}
