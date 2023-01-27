#include <vector>
#include <iostream>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    vector <int> sol;
    for (int i = 0; i < v1.size(); ++i) {
        sol.push_back(v1[i]);
    }
    for (int j = 0; j < v2.size(); ++j) {
        sol.push_back(v2[j]);
    }
    return sol;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < v1.size(); ++i) {
        cin >> v1[i];
    }
    for (int j = 0; j < v2.size(); ++j) {
        cin >> v2[j];
    }
    for (int k = 0; k < concatenation(v1,v2).size(); ++k) {
        cout << concatenation(v1,v2)[k] << endl;
    }
}
