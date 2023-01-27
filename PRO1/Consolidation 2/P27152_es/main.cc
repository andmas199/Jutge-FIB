#include <iostream>
using namespace std;

int main() {
    char c;
    int sum = 0;
    while (cin >> c) {
        if (c == 'a' or c == 'e') sum += 1;
        else if (c == 'o' or c == 's') sum += 2;
        else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') sum += 3;
        else if (c == 'c' or c == 'l' or c == 't' or c == 'u') sum += 4;
        else if (c == 'm' or c == 'p') sum += 5;
        else if (c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or
            c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') sum += 6;
        else if (c == 'k' or c == 'w') sum += 7;
    }
    cout << sum << endl;
}
