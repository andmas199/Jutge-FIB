#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    double max = v[0];
    int max_pos = 0;
    for (int i = 1; i <= m; ++i) {
        if (v[i] >= max) {
            if (max != v[i]) max_pos = i;
            max = v[i];
        }
    }
    
    return max_pos;
}

int main() {
    int m,size;
    cin >> m >> size;
    vector <double> v(size);
    
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    cout << position_maximum(v,m) << endl;
}
