#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct equipo {
    int puntos, goles_marcados, goles_recibidos, num ;
};

typedef vector< pair<int,int> > Row;
typedef vector<Row> Matrix;

bool cmp (const equipo& a, const equipo& b) {
    if (a.puntos != b.puntos) return a.puntos > b.puntos;
    else if (a.goles_marcados - a.goles_recibidos != b.goles_marcados - b.goles_recibidos)
        return a.goles_marcados - a.goles_recibidos > b.goles_marcados - b.goles_recibidos;
    else return a.num < b.num;
}

void leer_mat(Matrix& m, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j].first >> m[i][j].second;
        }
    }
}

void tratar(const Matrix& m, vector <equipo>& v, int n) {
        for (int k = 0; k < n; ++k) {
            v[k].num = k+1;
            for (int l = 0; l < n; ++l) {
                if (k != l and m[k][l].first >= 0) {
                    
                    if(m[k][l].first > m[k][l].second) v[k].puntos += 3;
                    else if(m[k][l].first < m[k][l].second) v[l].puntos += 3;
                    else if(m[k][l].first == m[k][l].second) {
                        v[k].puntos += 1;
                        v[l].puntos += 1;
                    }
                    v[k].goles_marcados += m[k][l].first;
                    v[l].goles_marcados += m[k][l].second;
                    v[k].goles_recibidos += m[k][l].second;
                    v[l].goles_recibidos += m[k][l].first;

            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <equipo> v(n);
    Matrix m(n, Row(n));
    
    leer_mat(m,n);
    tratar(m,v,n);
    sort (v.begin(), v.end(), cmp);
    
    for (int p = 0; p < n; ++p) {
        cout << v[p].num << " " << v[p].puntos << " " << v[p].goles_marcados << " " << v[p].goles_recibidos << endl;
    }
}
