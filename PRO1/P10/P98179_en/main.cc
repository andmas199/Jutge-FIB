#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    int i = v.size()-1;
    double x = v[i];
    
    while(i > 0 and v[i-1] > v[i]) {
        v[i] = v[i-1];
        v[i-1] = x;
        --i;
    }
}

int main() {
    int size;
    cin >> size;
    vector<double> v(size);
    
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    
    insert(v);
/*    
    for (int i = 0; i < size; ++i) {
        cout << v[i];
    }
    cout << endl;*/
}
