#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    char c;
    cin >> c;
    
    for( int i = 0; i < 6; ++i) {
        string s;
        bool b = false;
        
        if (i == 0) {
            s = "letter";
            if ((c > 64 and c < 91) or (c > 96 and c < 123)) b = true; 
        }
        if (i == 1) {
            s = "vowel";
            if (c == 65 or c == 69 or c == 73 or c == 79 or c == 85) b = true;
            else if (c == 97 or c == 101 or c == 105 or c == 111 or c == 117) b = true;
        }
        if (i == 2) {
            s = "consonant";
            if (c > 64 and c < 91 and c != 65 and c != 69 and c != 73 and c != 79 and c != 85) b = true;
            if (c > 96 and c < 123 and c != 97 and c != 101 and c != 105 and c != 111 and c != 117) b = true; 
        }
        if (i == 3) {
            s = "uppercase";
            if (c > 64 and c < 91) b = true; 
        }
        if (i == 4) {
            s = "lowercase";
            if (c > 96 and c < 123) b = true; 
        }
        if (i == 5) {
            s = "digit";
            if (c > 47 and c < 58) b = true; 
        }
        print_line(c,s,b);
    }

}
