#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> AD_list;

void read_list(AD_list& graf, vector<int>& grade, int n_precedences) {
    for(int i = 0; i < n_precedences; ++i) {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        graf[aux1].push_back(aux2);
        grade[aux2]++;
    }
}

void topological_sort(AD_list& graf, vector<int>& grade) {
    priority_queue<int,vector<int>, greater<int>> mirar;
    vector<int> sol;
    for(int j = 0; j < grade.size(); ++j) {
        if(grade[j] == 0) mirar.push(j);
    }
    while(not mirar.empty()) {
        int aux = mirar.top();
        mirar.pop();
        sol.push_back(aux);
        for(int i = 0; i < graf[aux].size(); ++i) {
            int v = graf[aux][i];
            --grade[v];
            if(grade[v] == 0) mirar.push(v);
        }
    }
    for(int i = 0; i < sol.size(); ++i) {
        if(i != 0) cout << " ";
        cout << sol[i];
    }
    cout << endl;
}

int main() {
    int n_tasks,n_precedences;
    while(cin >> n_tasks >> n_precedences) {
        AD_list graf(n_tasks);
        vector<int> grade(n_tasks,0);

        read_list(graf,grade,n_precedences);
        topological_sort(graf,grade);
    }
}