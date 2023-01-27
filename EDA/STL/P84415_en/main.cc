#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> a;
    string command;
    int size = 0;

    while(cin >> command) {
        if (command == "store") {
            string aux;
            cin >> aux;
            if (a.find(aux) == a.end()) {
                a.insert(pair<string,int> (aux,1));
                ++size;
            }
            else ++a[aux];
        }
        else if (command == "delete") {
            string aux;
            cin >> aux;
            if (a.find(aux) != a.end()) {
                --a[aux];
                if (a[aux] == 0) {
                    a.erase(aux);
                    --size;
                }
            }
        }
        else if (command == "minimum?") {
            if (size == 0) cout << "indefinite minimum" << endl;
            else {
                auto it = a.begin();
                cout << "minimum: " << it->first << ", " << it->second << " time(s)" << endl;
            } 
        }
        else {
            if (size == 0) cout << "indefinite maximum" << endl;
            else {
                auto it = a.rbegin();
                cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl; 
            }
        }   
    }
}