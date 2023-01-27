#include <vector>
#include <iostream>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void read_mat(Matrix& mat, vector<pair<int,int>>& zone) {
    for(int i = 0; i < mat.size(); ++i) {
        for(int j = 0; j < mat[0].size(); ++j) {
            cin >> mat[i][j];
            if (mat[i][j] != '#' and mat[i][j] != '.') zone.push_back(pair<int,int> (i,j));
        }
    }
}

bool is_valid(int x, int y, int lim_x, int lim_y) {
    if (x >= lim_x or x < 0) return false;
    else if (y >= lim_y or y < 0) return false;
    else return true;
}

void write_mat(Matrix& mat) {
    for(int i = 0; i < mat.size(); ++i) {
        if (i > 0)cout << endl;
        for(int j = 0; j < mat[0].size(); ++j) {
            cout << mat[i][j];
        }
    }
    cout << endl;
}

void colour(Matrix& map, vector<vector<bool>>& vis, int x, int y, char a) {
    int lim_x = map.size();
    int lim_y = map[0].size();

    vis[x][y] = true;
    map[x][y] = a;
    if(is_valid(x+1,y,lim_x,lim_y) and not vis[x+1][y] and map[x+1][y] != '#') colour(map,vis,x+1,y,a);
    if(is_valid(x-1,y,lim_x,lim_y) and not vis[x-1][y] and map[x-1][y] != '#') colour(map,vis,x-1,y,a);
    if(is_valid(x,y+1,lim_x,lim_y) and not vis[x][y+1] and map[x][y+1] != '#') colour(map,vis,x,y+1,a);
    if(is_valid(x,y-1,lim_x,lim_y) and not vis[x][y-1] and map[x][y-1] != '#') colour(map,vis,x,y-1,a);
}

int main() {
    int x,y;
    while(cin >> x >> y) {
        vector<pair<int,int>> zone;
        vector<vector<bool>> vis(x,vector<bool>(y,false));
        Matrix map(x,Row(y));
        
        read_mat(map,zone);

        for(auto b : zone) {
            colour(map,vis,b.first,b.second,map[b.first][b.second]);
        }
        write_mat(map);
        cout << endl;
    }
    
}