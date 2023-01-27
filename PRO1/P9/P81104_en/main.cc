#include <iostream>
#include <vector>
using namespace std;

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
};

//Busca cual es la nota que el alumno con cierto dni ha obtenido a la asignatura nom.
//Devuelve -1 si no la encuentra o si no existe el alumno o si es NP.
double nota(const vector<Alumne>& alums, int dni, string nom) {
    int size_al = alums.size();
    
    for (int i = 0; i < size_al; ++i) {
        if (alums[i].dni == dni) {
            int size_as = alums[i].ass.size();
            
            for (int j = 0; j < size_as; ++j) {
                if (nom == alums[i].ass[j].nom) {
                    return alums[i].ass[j].nota;
                }
            }
        }
    }
    return -1;
}

//Calcula la nota media de las asignaturas del vector ass, sin tener en cuenta las NP.
double mitjana(const vector<Assignatura>& ass) {
    double avg = 0.0, cont = 0;
    int size = ass.size();
    for (int i = 0; i < size; ++i) {
        if(ass[i].nota != -1) {
            avg += ass[i].nota;
            ++cont;
        }
    }
    if (cont != 0) return avg/cont;
    else return -1;
}

//Cuenta y deja en com el numero de alumnos que tienen una nota media superior a la
//nota que el alumno dni ha obtenido en la asignatura nom.
void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    int size_al = alums.size();    
    double note = nota(alums, dni, nom);
    
    for (int i = 0; i < size_al; ++i) {
        double media = mitjana(alums[i].ass);
        if (media > note) ++com;
    }
}

int main() {
    int n;
    cin >> n;
    vector<Alumne> alums(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> alums[i].nom >> alums[i].dni;
 
        int p;
        cin >> p;
        alums[i].ass = vector<Assignatura>(p);
 
        for (int j = 0; j < p; ++j) {
            cin >> alums[i].ass[j].nom >> alums[i].ass[j].nota;
        }
    }
 
    int dni;
    string nom;
    
while (cin >> dni >> nom) {
        int com = 0;
        compta(alums,dni,nom,com);
        cout << com << endl;
        }
}
