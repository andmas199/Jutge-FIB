#include "CuaIOParInt.hh"
using namespace std;

void llegirCuaParInt(queue<ParInt>& c) {
    ParInt a;
    while (a.llegir()) {
        c.push(a);
    }
}

void escriureCuaParInt(queue<ParInt> c) {
    while (not c.empty()) {
        cout << c.front().primer() << " " << c.front().segon() << endl;
        c.pop();
    }
}
