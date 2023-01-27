#include <iostream>
#include <queue>
using namespace std;

int main() {
    char a;
    priority_queue<int> s;

    while (cin >> a) {
        if (a == 'S') {
            int aux;
            cin >> aux;
            s.push(aux);
        }
        else if (a == 'A') {
            if (s.empty()) cout << "error!" << endl;
            else cout << s.top() << endl;
        }
        else if (a == 'R') {
            if (s.empty()) cout << "error!" << endl;
            else s.pop();
        }
        else if (a == 'I' or a == 'D') {
            int b;
            cin >> b;
            if (s.empty()) cout << "error!" << endl;
            else if (a == 'I') {
                int aux = s.top();
                s.pop();
                s.push(aux + b);
            }
            else if (a == 'D') {
                int aux = s.top();
                s.pop();
                s.push(aux - b);
            }
        }

    }
}
