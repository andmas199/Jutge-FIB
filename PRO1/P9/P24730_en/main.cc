#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Teacher {
    string name;
    int sweet,carrot;
};

bool com(Teacher a, Teacher b) {
    if (a.sweet != b.sweet) return (a.sweet > b.sweet);
    else if (a.carrot != b.carrot) return (a.carrot > b.carrot);
    else if (a.name.size() != b.name.size()) return a.name.size() < b.name.size();
    else return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        vector<Teacher> a(t);
        
        for (int j = 0; j < t; ++j) {
            cin >> a[j].name >> a[j].sweet >> a[j].carrot;
        }
        
        sort(a.begin(), a.end(), com);
        
        for ( int k = 0; k < t; ++k) {
            cout << a[k].name << endl;
        }
        cout << endl;
    }
}
