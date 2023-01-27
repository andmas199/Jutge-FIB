#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    if( (a >= 'A' ) and ( a <= 'Z')) { cout << "uppercase" << endl;}
    if( (a >= 'a') and (a <= 'z')) { cout << "lowercase" << endl;}
    if((a == 'a') or ('A' == a) or (a == 'e') or (a == 'E') or (a == 'i') or (a == 'I') or (a == 'o') or (a == 'O') or (a == 'u') or (a == 'U')) {
    cout << "vowel" << endl;
    }
    else {cout << "consonant" << endl;}
}
