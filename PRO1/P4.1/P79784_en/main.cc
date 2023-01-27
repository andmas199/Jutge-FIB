#include <iostream>
using namespace std;

int main() {
    char dir;
    int v1 = 0, v2 = 0;
    while (cin >> dir) {
        if (dir == 'n') v2 -= 1;
        else if (dir == 's') v2 += 1;
        else if (dir == 'e') v1 += 1;
        else if (dir == 'w') v1 -= 1;
    }
    cout << "(" << v1 << ", " << v2 << ")" << endl;
}
