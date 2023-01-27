#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string cod;
    while (cin >> cod) {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            string a;
            cin >> a;
            int size = a.size();
            
            for (int j = 0; j < size; ++j) {
                if (a[j] == '_') cout << " ";
                else {
                    bool found = false;
                    int k = -1;
                    while (not found and k < 26) {
                        ++k;
                        if (a[j] == cod[k]) {
                            found = true;
                            cout << abc[k];
                        }
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
