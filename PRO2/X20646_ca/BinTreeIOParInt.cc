#include "BinTreeIOParInt.hh"
#include <iostream>
using namespace std;

// Pre: a és buit; el canal estandar d’entrada conté un nombre
// parell d’enters, que representa un arbre binari en preordre,
// on el parell 0 0 representa un arbre buit
// Post: a conté l’arbre que hi havia al canal estandar d’entrada
void read_bintree_parint(BinTree<ParInt>& a) {
    ParInt x;
    if (x.llegir()) {
        BinTree<ParInt> l;
        read_bintree_parint(l);
        BinTree<ParInt> r;
        read_bintree_parint(r);
        a = BinTree<ParInt>(x,l,r);
  }
  else a = BinTree<ParInt> (x);
}

// Pre: a = A
// Post: s’han escrit al canal estandar de sortida els elements
// d’a recorrreguts en inordre, a = A
void write_bintree_parint(const BinTree<ParInt>& a) {
	if (not a.empty()) {
		ParInt x = a.value();
        cout << " " << x.primer() << " " << x.segon() << endl;
		write_bintree_parint(a.left());
        cout << "finished left brach" << endl;
		write_bintree_parint(a.right());
  }
}
