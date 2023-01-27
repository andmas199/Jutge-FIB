#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (c>b and a<c){a=c;}
    if (b>a){a=b;}
    cout<< a << endl;
}
