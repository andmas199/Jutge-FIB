#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

void leer_vec (vector<Estudiant>& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        v[i].llegir();
    }
}

void escribir_vec (vector<Estudiant>& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        v[i].escriure();
    }
}

void simplifica_vec (const vector<Estudiant>& v, vector<Estudiant>& sol) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        bool found = false;
        int size_sol = sol.size();
        int j = 0;
        while(j < size_sol and not found) {
            if (v[i].consultar_DNI() == sol[j].consultar_DNI()) {
                if (v[i].te_nota() and sol[j].te_nota() and v[i].consultar_nota() > sol[j].consultar_nota()) {
                    sol[j].modificar_nota(v[i].consultar_nota());
                }
                else if (v[i].te_nota() and not sol[j].te_nota()) sol[j].afegir_nota(
                    v[i].consultar_nota());
                found = true;
            }
            ++j;
        }
        if (not found) sol.push_back(v[i]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<Estudiant> ent(n);
    vector<Estudiant> sol;
    leer_vec(ent);
    simplifica_vec(ent,sol);
    escribir_vec(sol);
}
