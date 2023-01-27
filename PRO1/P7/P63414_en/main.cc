#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> num(1001);
    for (int i = 0; i < n; ++i) {
        int z;
        cin >> z;
        z = z - 1000000000;
        ++num[z];
    }
    for (int j = 0; j < 1001; ++j) {
        if (num[j] != 0) cout << j + 1000000000 << " : " << num[j] << endl;
    }
}
