#include <iostream>
#include <sstream>
#include <queue>
using namespace std;

int main() {
    string leer;
    while(getline(cin, leer)) {
        istringstream aux(leer);
        priority_queue<int> q;
        int c;
        while(aux >> c) q.push(c);
        int cont = 1;
        if (q.empty()) cout << "0" << endl;
        else {
            while (not q.empty()) {
                int prev = q.top();
                q.pop();
                if ((prev % 2 == 0 and q.top() % 2 != 0) or (prev % 2 != 0 and q.top() % 2 == 0)) ++cont;
            }
            cout << cont << endl;
        }
    }
}