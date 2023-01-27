#include <iostream>
#include <vector>
using namespace std;

string exit(int p, vector<int>& v) {
    int size = v.size();
    while (v[p] != 0) {
        int aux = p;
        p = p + v[p];
        if (p >= size) return "right";
        else if (p < 0) return "left";
        v[aux] = 0;
    }
    return "never";
}

int main() {
  int p, n;
  while (cin >> p >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << exit(p, v) << endl;
  }
}
