#include "Estudiant.hh"
#include "Cjt_estudiants.hh"
#include <iostream>
using namespace std;

Cjt_estudiants act (Cjt_estudiants& p, const Cjt_estudiants& s) {
    int sizep = p.mida();
    for(int i = 0; i < sizep; ++i) {
        int j = i;
//         bool found = false;
//         while (j < sizes and not found) {
            if (p.consultar_iessim(i+1).consultar_DNI() ==
                s.consultar_iessim(j+1).consultar_DNI()) {
                if (s.consultar_iessim(j+1).te_nota() and
                    p.consultar_iessim(i+1).te_nota() and
                    s.consultar_iessim(j+1).consultar_nota() >
                    p.consultar_iessim(i+1).consultar_nota()) {
                        p.modificar_iessim(i+1,s.consultar_iessim(j+1));
//                         found = true;
                    }
                else if (not p.consultar_iessim(i+1).te_nota() and
                        s.consultar_iessim(j+1).te_nota())
                    p.modificar_iessim(i+1,s.consultar_iessim(j+1));
            }
//             ++j;
//         }
    }
    return p;
}

int main() {
    Cjt_estudiants primero;
    Cjt_estudiants segundo;
    primero.llegir();
    segundo.llegir();
    act(primero,segundo);
    primero.escriure();
}
