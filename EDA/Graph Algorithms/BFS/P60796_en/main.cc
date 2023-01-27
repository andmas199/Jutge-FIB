#include <iostream>
#include <vector>
#include <cassert>
#include <map>
#include <queue>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

struct punto {
    int dist = -1;
    pair<int,int> anterior;
    bool visto = false;
};

void read_map(Matrix& chart, int altura, int anchura) {
    for(int i = 0; i < altura; ++i) {
        for(int j = 0; j < anchura; ++j) {
            cin >> chart[i][j];
            //cout << chart[altura][anchura];
        }
        //cout << endl;
    }
}

int search_map(Matrix& chart, vector<vector<punto>>& puntos, int origen_alt, int origen_anch) {
    
    int altura = chart.size();
    int anchura = chart[0].size();

    puntos[origen_alt][origen_anch].dist = 0;
    puntos[origen_alt][origen_anch].visto = true;
    queue<pair<int,int>> cola;
    cola.push(pair<int,int> (origen_alt,origen_anch));

    while(not cola.empty()) {
        pair<int,int> aux = cola.front();
        cola.pop();
        for(int i = 0; i < 4; ++i) {
            pair<int,int> aux2 (-1,-1);
            switch (i) {
                case 0:
                    if(aux.first+1 < altura)aux2 = pair<int,int> (aux.first+1,aux.second);
                    break;
                case 1:
                    if (aux.first-1 >= 0)aux2 = pair<int,int> (aux.first-1,aux.second);
                    break;
                case 2:
                    if(aux.second + 1 < anchura)aux2 = pair<int,int> (aux.first,aux.second + 1);
                    break;
                case 3:
                    if(aux.second - 1 >= 0)aux2 = pair<int,int> (aux.first,aux.second - 1);
                    break;
            }
            if ((aux2.first != -1) and chart[aux2.first][aux2.second] != 'X' and puntos[aux2.first][aux2.second].dist == -1) {
                cola.push(aux2);
                puntos[aux2.first][aux2.second].dist = puntos[aux.first][aux.second].dist + 1;
                if(chart[aux2.first][aux2.second] == 't') return puntos[aux2.first][aux2.second].dist;
            }
        }  
    }
    return -1;
    
}

int main() {
    int altura,anchura,origen_alt,origen_anch;
    cin >> altura >> anchura;
    Matrix chart(altura,Row(anchura));
    vector<vector<punto>> puntos(altura,vector<punto> (anchura));

    read_map(chart,altura,anchura);

    cin >> origen_alt >> origen_anch;

    int distance = search_map(chart,puntos,origen_alt-1,origen_anch-1);
    if(distance != -1) cout << "minimum distance: " << distance << endl;
    else cout << "no treasure can be reached" << endl;
}