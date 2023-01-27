#include <iostream>
#include <queue>
using namespace std;

int main() {
    cout.precision(4);
    cout.setf(ios::fixed);

    priority_queue<int, vector<int>, greater<int> > a;
    string comando;
    int suma = 0, size = 0, maximo = 0;
    
    while(cin >> comando) {
        
        if (comando == "number") {
            int aux;
            cin >> aux;
            a.push(aux);
           if (size == 0 or aux > maximo) {
                maximo = aux;
            }
            ++size;
            suma += aux;
            cout << "minimum: " << a.top() << ", maximum: " << maximo << ", average: " << double(suma)/size << endl;
        }
        else {
            if (not a.empty()) {
                suma -= a.top();
                a.pop();
                --size;
            }
            if (a.empty()) cout << "no elements" << endl;
            else cout << "minimum: " << a.top() << ", maximum: " << maximo << ", average: " << double(suma)/size << endl;
        }
    }
}