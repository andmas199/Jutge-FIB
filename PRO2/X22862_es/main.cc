#include "Estudiant.hh"
#include "Cjt_estudiants.hh"
#include <iostream>
using namespace std;

// -1 añadir estudiante                 ** W
// -2 consulta nota                     ** W
// -3 modifica nota                     **
// -4 redondea nota todos estudiantes
// -5 escribir conjunto                    W 

double redondear(double r) {
  return int(10.*(r + 0.05)) / 10.0;
}

void add (Cjt_estudiants& conj) {
    int dni;
    double nota;
    cin >> dni >> nota;
    Estudiant e(dni);
            
    if (conj.existeix_estudiant(dni))
        cout << "el estudiante " << dni << " ya estaba" << endl << endl;
    else if (conj.mida() == 5)
        cout << "el conjunto esta lleno" << endl << endl;
    else {
        if (nota >= 0 and nota <= 10) e.afegir_nota(nota);
        conj.afegir_estudiant(e);
    }
}

void consulta (const Cjt_estudiants& conj) {
    int dni;
    cin >> dni;
    if (not conj.existeix_estudiant(dni))
        cout << "el estudiante " << dni << " no esta" << endl << endl;
    else if (not conj.consultar_estudiant(dni).te_nota()) 
        cout << "el estudiante " << dni << " no tiene nota" << endl << endl;
    else cout << "el estudiante " << dni << " tiene nota " <<
        conj.consultar_estudiant(dni).consultar_nota() << endl << endl;
}

void modifica (Cjt_estudiants& conj) {
    int dni;
    double nota;
    cin >> dni >> nota;
    Estudiant e(dni);
            
    if (not conj.existeix_estudiant(dni)) 
        cout << "el estudiante " << dni << " no esta" << endl << endl;
    else {
        e.afegir_nota(nota);
        conj.modificar_estudiant(e);
    }
}

void redondea_todos (Cjt_estudiants& conj) {
    int max = conj.mida();
    for (int i = 1; i <= max; ++i) {
        if (conj.consultar_iessim(i).te_nota()) {
            Estudiant e(conj.consultar_iessim(i).consultar_DNI());
            e.afegir_nota(redondear(conj.consultar_iessim(i).consultar_nota()));
            conj.modificar_iessim(i,e);
        }
    }
}

int main() {
    Cjt_estudiants conj;
    conj.llegir();
    int n;
    while (cin >> n and n != -6) {
        if (n == -1) add(conj);
        else if (n == -2) consulta(conj);
        else if (n == -3) modifica(conj);
        else if (n == -4) redondea_todos(conj);
        else if (n == -5) {
            conj.escriure();
            cout << endl;
        }
    }
}
