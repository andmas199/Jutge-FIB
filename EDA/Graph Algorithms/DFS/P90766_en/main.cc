#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void read_mat(Matrix& mat) {
    for(int i = 0; i < mat.size(); ++i) {
        for(int j = 0; j < mat[0].size(); ++j) {
            cin >> mat[i][j];
        }
    }
}

bool is_valid(int x, int y, int lim_x, int lim_y) {
    if (x >= lim_x or x < 0) return false;
    else if (y >= lim_y or y < 0) return false;
    else return true;
}

void search_map(Matrix& map,int x, int y,int& cont, Matrix& vis) {
    int lim_x = map.size();
    int lim_y = map[0].size();

    vis[x][y] = true;
    if(map[x][y] == 't') ++cont;
    if(is_valid(x+1,y,lim_x,lim_y) and not vis[x+1][y] and map[x+1][y] != 'X') search_map(map,x+1,y,cont,vis);
    if(is_valid(x-1,y,lim_x,lim_y) and not vis[x-1][y] and map[x-1][y] != 'X') search_map(map,x-1,y,cont,vis);
    if(is_valid(x,y+1,lim_x,lim_y) and not vis[x][y+1] and map[x][y+1] != 'X') search_map(map,x,y+1,cont,vis);
    if(is_valid(x,y-1,lim_x,lim_y) and not vis[x][y-1] and map[x][y-1] != 'X') search_map(map,x,y-1,cont,vis);

}

int main() {
    int x,y,ini_x,ini_y,cont = 0;
    cin >> x >> y;
    Matrix map(x,Row(y));
    Matrix vis(x,Row(y));
    
    read_mat(map);

    cin >> ini_x >> ini_y;
    search_map(map,ini_x-1,ini_y-1,cont,vis);
    cout << cont << endl;
}