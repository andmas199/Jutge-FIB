#include "Estudiant.hh"
#include <vector>
#include <iostream>
using namespace std;

pair<int,int>  max_min_vest(const vector<Estudiant>& v) {
        pair<int,int> a(0, 0);
        double max = -0.5, min = 10.01;
        int size = v.size(), j = 0;
        
        while (j < size and not v[j].te_nota()) {
            a.first = j;
            a.second = j;
            ++j;
        }
        
        if (j == size) {
            a.first = -1;
            a.second = -1;
        }
        
        else {
            for (int i = j; i < size; ++i) {
                if (v[i].te_nota()) {
                    if (v[i].consultar_nota() > max) {
                        a.first = i;
                        max = v[i].consultar_nota();
                    }
                    else if (v[i].consultar_nota() < min) {
                        a.second = i;
                        min = v[i].consultar_nota();
                    }
                    else if (v[i].consultar_nota() == v[a.first].consultar_nota() and v[i].consultar_DNI() < 
                        v[a.first].consultar_DNI()) a.first = i;
                    else if (v[i].consultar_nota() == v[a.second].consultar_nota() and v[i].consultar_DNI() < 
                        v[a.second].consultar_DNI()) a.second = i;
                }
            } 
        }
        return a;
}

// int main() {
//      int n;
//      cin >> n;
//      vector <Estudiant> v(n);
//      
//      for(int i = 0; i < n; ++i) {
//         v[i].llegir();
//      }
//      
//      pair <int,int> a = max_min_vest(v);
//      cout << a.first << " " << a.second << endl;
// }
