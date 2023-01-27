#include <iostream>
#include <vector>
using namespace std;

int comptatge_frontisses(const vector<int> &v) {
 /* Pre: cert */
 /* Post: el resultat es el nombre d'elements frontissa de v */
    int izq = 0;
    int derecha = 0;
    int cont = 0;
    int size = v.size();
    for(int j = 0; j < size; ++j) {
        derecha = derecha + v[j];
    }
    for (int i = 0; i < size; ++i) {
        derecha = derecha - v[i];
        if (derecha-izq == v[i]) ++cont;
        izq = izq + v[i];
    }
    return cont;
}

// int main() {
//     int n;
//     cin >> n;
//     vector <int> v;
//     for (int i = 0; i < n; ++i) {
//         int num;
//         cin >> num;
//         v.push_back(num);
//     }
//     cout << comptatge_frontisses(v) << endl;
// }
