//Pre: a vector with 3 or more elements
//Post a vector with the

#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cimas(const vector<int>& v) {
    vector<int> sol;
    int size = v.size() - 2;
    for (int i = 1; i <= size; ++i) {
        if(v[i] > v[i+1] and v[i-1] < v[i]) sol.push_back(v[i]);
    }
    return sol;
}

int main() {
    bool ultima = false;
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    cout << calcula_cimas(v).size() << ":";
    if (calcula_cimas(v).size() > 0) {
    for (int j = 0; j < calcula_cimas(v).size(); ++j) {
        cout << " " << calcula_cimas(v)[j];
    }
    cout << endl;
    for (int k = 0; k < calcula_cimas(v).size()-1; ++k) {
        if (calcula_cimas(v)[k] > calcula_cimas(v)[calcula_cimas(v).size() -1]) {
            cout << calcula_cimas(v)[k];
            ultima = true;
        }
        if (k+1 < calcula_cimas(v).size()-1 and ultima) cout << " ";
    }
    }
    else cout << endl;
    if (not ultima) cout << "-" << endl;
    else cout << endl;
}
