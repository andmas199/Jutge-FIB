//Pre: un numero n que indica el numero de palabras seguido de las palabras.
/*Post: la longitud media de las palabras(usando dos decimales y la letra
 * mas frecuente que aparece en las palabras que son iguales o superiores
 * a la longitud media
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

char letra_mas_frecuente(const string& s) {
    vector <char>char_list(s.begin(), s.end());
    sort (char_list.begin(), char_list.end());
    int c = 1, cmax = 0;
    char p0 = '#', pmax = '#';

    for (int i = 0; i < char_list.size(); i++) {
        if (p0 == char_list[i]) c++;
        else c = 1;

        if (cmax < c) {
            cmax = c;
            pmax = char_list[i];
        }

        p0 = char_list[i];
    }
    return pmax;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2); 
    int n;
    double sol = 0.0;
    cin >> n;
    vector <string> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sol +=  v[i].length();
    }
    sol /= n;
    cout << sol << endl;
    
    for (int j = 0; j < n; ++j) {
        if (v[j].length() >= sol) {
            cout << v[j] << ": ";
            cout << letra_mas_frecuente(v[j]) << endl;
        }
    }
    
}
