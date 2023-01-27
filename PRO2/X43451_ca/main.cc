#include <vector>
#include "Estudiant.hh"
using namespace std;
/* Pre: cert */
/* Post: els estudiants de v amb nota passen a tenir la seva nota arrodonida
a la decima mes propera */
void arrodonir_vector(vector<Estudiant>& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        if (v[i].te_nota()) v[i].modificar_nota(((int) (10. * (v[i].consultar_nota() + 0.05))) / 10.0);
    }
}
