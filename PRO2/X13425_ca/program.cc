#include "CuaIOParInt.hh"
using namespace std;

void distribuir_cua(queue<ParInt>& c, queue<ParInt>& a, queue<ParInt>& b) {
    int suma_a = 0, suma_b = 0;
    while (not c.empty()) {
        if(suma_a <= suma_b) {
            suma_a += c.front().segon();
            a.push(c.front());
            c.pop();
        }
        else {
            suma_b += c.front().segon();
            b.push(c.front());
            c.pop();
        }
    }
}

int main() {
    queue<ParInt> c;
    queue<ParInt> a;
    queue<ParInt> b;
    llegirCuaParInt(c);
    distribuir_cua(c, a , b);
    escriureCuaParInt(a);
    cout << endl;
    escriureCuaParInt(b);
}
