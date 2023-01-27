#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void read_map(Matrix& map,int n_filas,int n_col,int& ini_x,int& ini_y) {
    for(int i = 0; i < n_filas; ++i) {
        for(int j = 0; j < n_col; ++j) {
            cin >> map[i][j];
            if(map[i][j] == 'P') {ini_x = i;ini_y = j;}
        }
    }
}

bool is_correcto(Matrix& mapa,int pos_x,int pos_y) {
    if(pos_x >= 0 and pos_x < mapa.size() and pos_y >= 0 and pos_y < mapa[0].size()) return true;
    else return false;
}

bool is_cerca(Matrix& mapa, int pos_x,int pos_y) {
    for(int i = -1; i < 2; ++i) {
        for(int j = -1; j < 2; ++j) {
            if(is_correcto(mapa,pos_x+i,pos_y+j) and mapa[pos_x+i][pos_y+j] == 'F') return true;
        }
    }
    return false;
}

bool search_pellet(Matrix& mapa, vector<vector<bool>>& visto, int pos_x,int pos_y) {
    if(not visto[pos_x][pos_y] and not is_cerca(mapa,pos_x,pos_y)) {
        //cout << pos_x << " " << pos_y << " " << is_correcto(mapa,pos_x+1,pos_y) << endl;
        visto[pos_x][pos_y] = true;
        bool found = false;
        if(mapa[pos_x][pos_y] == 'B') return true;
        if(is_correcto(mapa,pos_x+1,pos_y) and not visto[pos_x+1][pos_y] and mapa[pos_x+1][pos_y] != 'X') found = found or search_pellet(mapa,visto,pos_x+1,pos_y);
        if(is_correcto(mapa,pos_x-1,pos_y) and not visto[pos_x-1][pos_y] and mapa[pos_x-1][pos_y] != 'X') found = found or search_pellet(mapa,visto,pos_x-1,pos_y);
        if(is_correcto(mapa,pos_x,pos_y+1) and not visto[pos_x][pos_y+1] and mapa[pos_x][pos_y+1] != 'X') found = found or search_pellet(mapa,visto,pos_x,pos_y+1);
        if(is_correcto(mapa,pos_x,pos_y-1) and not visto[pos_x][pos_y-1] and mapa[pos_x][pos_y-1] != 'X') found = found or search_pellet(mapa,visto,pos_x,pos_y-1);
        return found;
    }
    return false;
}


int main() {
    int n_filas,n_col,ini_x,ini_y;
    while(cin >> n_filas >> n_col) {
        Matrix mapa(n_filas,Row(n_col));
        vector<vector<bool>> visto(n_filas,vector<bool> (n_col,false));

        read_map(mapa,n_filas,n_col,ini_x,ini_y);

        if (search_pellet(mapa,visto,ini_x,ini_y)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}