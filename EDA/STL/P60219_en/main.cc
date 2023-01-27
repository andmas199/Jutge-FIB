#include <iostream>
#include <map>
#include <set>
using namespace std;

struct classcomp {
    bool operator() (const string& a, const string& b) const{
        int size_a = a.size();
        int size_b = b.size();
        if (size_a != size_b) return size_a < size_b;
        else return a < b; 
    }
};

int main() {
    string word;
    int cont = 1;
    map<string,bool> a;
    
    while (cin >> word) {
        if (word == "END" or word == "QUIT") {
            if (cont != 1) cout << endl;
            cout << "GAME #" << cont << endl;
            ++cont;
            cout << "HAS:" << endl;
            for(auto it : a) {
                if (it.second) cout << it.first << endl;
            }
            cout << endl << "HAD:" << endl;
            set <string,classcomp> b;
            for (auto it1 : a) {
                if (!it1.second) b.insert(it1.first);
            }
            for (string aux : b) {
                cout << aux << endl;
            }
            a.clear();
            if (word == "QUIT") break;
        }
        else {
            if (a.find(word) == a.end() or !a[word]) {
                a[word] = true;
            }
            else a[word] = false;
        }
    }
}