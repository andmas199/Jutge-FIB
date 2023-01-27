#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> m;
    string name;
    while (cin >> name) {
        string op;
        cin >> op;
        if (op == "enters") {
            if (m.find(name) == m.end()) {
                m.insert(pair<string, int> (name, 0));
            }
            else {
                cout << name << " is already in the casino" << endl;
            }
        }
        else if (op == "leaves") {
            if (m.find(name) != m.end()) {
                cout << name << " has won " << m.find(name)->second << endl;
                m.erase(name);
            }
            else {
                cout << name << " is not in the casino" << endl;
            }
        }
        else if (op == "wins") {
            int aux;
            cin >> aux;
            if (m.find(name) == m.end()) cout << name << " is not in the casino" << endl;
            else m[name] += aux;
        }
    }
    cout << "----------" << endl;
    for (auto it : m) {
        cout << it.first << " is winning " << it.second << endl;
    }
}
