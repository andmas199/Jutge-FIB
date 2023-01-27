#include <iostream>
#include <queue>
#include <map>
using namespace std;

typedef vector<pair<int,int>> Row;
typedef vector<Row> AD_List;

struct vertice {
    bool visto = false;
    int distancia_inicio = -1;
};

int djikstra(AD_List& graf,int inicio, int final) {
    vector<vertice> vertices(graf.size());
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int> >> q;

       // cout << "hola" << endl;
        q.push(pair<int,int> (0,inicio));
        vertices[inicio].distancia_inicio = 0;

        while(not q.empty()) {
            int aux = q.top().second;
            q.pop();
            //cout << aux.second << endl;
            if(not vertices[aux].visto) {
                vertices[aux].visto = true;
                //cout << "test " << graf[aux.first].size() <<  endl;
                for(int i = 0; i < graf[aux].size(); ++i) {
                    //cout << aux2.second << " peso: " << aux2.first << endl;
                    if(vertices[graf[aux][i].second].distancia_inicio > (vertices[aux].distancia_inicio + graf[aux][i].first) or vertices[graf[aux][i].second].distancia_inicio == -1) {
                        vertices[graf[aux][i].second].distancia_inicio = vertices[aux].distancia_inicio + graf[aux][i].first;
                        q.push(pair<int,int> (vertices[graf[aux][i].second].distancia_inicio,graf[aux][i].second));
                    }
                }
            }
        }
       // cout << vertices[final].distancia_inicio << endl;
        return vertices[final].distancia_inicio;
}

void read_graf(AD_List& graf, int arcs) {
    for(int i = 0; i < arcs; ++i) {
        int u,v,c;
        cin >> u >> v >> c;
        graf[u].push_back(pair<int,int> (c,v));
    }
}

int main() {
    int vert, arcs;
    while (cin >> vert >> arcs) {
        int inicio, final;
        AD_List graf(vert);
    
        read_graf(graf, arcs);
        /*
        for(int i = 0; i < vert; ++i) {
            for (int j = 0; j < graf[i].size(); ++j) {
                cout << i << "-> " << graf[i][j].second << endl;
            }
        }
        */
        cin >> inicio >> final;

        int distancia_min = djikstra(graf,inicio,final);
        if(distancia_min >= 0) cout << distancia_min << endl;
        else cout << "no path from " << inicio << " to " << final << endl;
    }
}