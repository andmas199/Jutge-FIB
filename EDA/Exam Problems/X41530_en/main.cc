#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void read_graph(Matrix& graph, int edge) {
    for(int i = 0; i < edge; ++i) {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}

bool is_cicle(Matrix& graph, vector<bool>& vist,int nodo,int anterior) {
    if(vist[nodo]) return false;
    else {
        bool cicle = true;
        int size = graph[nodo].size();
        vist[nodo] = true;
        for(int i = 0; i < size; ++i) {
           if(anterior != graph[nodo][i]) cicle = cicle and is_cicle(graph,vist,graph[nodo][i],nodo);
        }
        return cicle;
    }
}

bool is_forest(Matrix& graph, vector<bool>& vist, int vert,int& cont) {
    int i = 0;
    bool CC = true;
    while(i < vert) {
        if(not vist[i]) {
            CC = CC and is_cicle(graph,vist,i, -1);
            ++cont;
        }
        ++i;
    }
    return CC;
}

int main() {
    int vert, edge;
    while (cin >> vert >> edge) {
        int cont = 0;
        if (vert == 0) cout << "no" << endl;
        else if (vert == 1) cout << vert << endl;
        else {
            Matrix graph(vert);
            vector<bool> vist(vert,false);

            read_graph(graph,edge);

            if(is_forest(graph,vist,vert,cont)) cout << cont << endl;
            else cout << "no" << endl;
        }
    }
}
