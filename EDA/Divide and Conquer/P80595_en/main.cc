#include <iostream>
#include <vector>
using namespace std;

int merge(int l, int m, int d, vector<int>& v) {
    int cont = 0;
    vector<int> aux(d-l+1);
    int i = l, j = m+1, k = 0;
    while(i <= m and j <= d) {
        if(v[i] <= v[j]) aux[k++] = v[i++];
        else {
            aux[k++] = v[j++];
            cont+=m+1-i;
        }
    }
    while(i <= m) aux[k++] = v[i++];
    while(j <= d) aux[k++] = v[j++];
    for(k = 0; k <= d-l; ++k) v[l+k] = aux[k];
    return cont;
}

void inversiones(int l, int d, int& cont, vector<int>& v) {
    if(l < d) {
        int m = (l+d)/2;
        inversiones(l,m,cont,v);
        inversiones(m+1,d,cont,v);
        cont += merge(l,m,d,v);
    }
}


int main() {
    int n;
    while(cin >> n) {
        int cont = 0;
        vector<int> v(n);

        for(int i = 0; i < n; ++i) cin >> v[i];

        inversiones(0,n-1, cont,v);
        cout << cont << endl;
    }
}