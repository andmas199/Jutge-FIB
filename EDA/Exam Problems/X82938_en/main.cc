#include <vector>
#include <iostream>
using namespace std;
/*
int buscar_cima(int l, int r, const vector<int>& v) {
    int medio = (r-l)/2;
    if(l > r) return -1;
    else if(l == r) return l;
    else if(medio-1 >= 0 and medio+1 < v.size()) {
        if(v[medio-1] < v[medio] and v[medio+1] < v[medio]) return medio;
        else if(v[medio-1] < v[medio] and v[medio+1] > v[medio]) return buscar_cima(medio+1,r,v);
        else if (v[medio-1] > v[medio] and v[medio+1] < v[medio]) return buscar_cima(l,medio-1,v);
    }
    else if(medio +1 < v.size() and v[medio] > v[medio+1]) return medio;
    return -1;
}

int cima(const vector<int>& v) {
    return buscar_cima(0,v.size()-1,v);
}
*/
bool bin_search_asc(int x, int l, int r, const vector<int>& v) {
    int medio = (l+r)/2;
    if(l > r) return false;
    else {
        if(x == v[medio]) return true;
        else if(x < v[medio]) return bin_search_asc(x,l,medio-1,v);
        else return bin_search_asc(x,medio+1,r,v);
    }
    return false;
}

bool bin_search_desc(int x, int l, int r, const vector<int>& v) {
    int medio = (l+r)/2;
    if(l > r) return false;
    else {
        if(x == v[medio]) return true;
        else if(x > v[medio]) return bin_search_desc(x,l,medio-1,v);
        else return bin_search_desc(x,medio+1,r,v);
    }
    return false;
}

bool search_uni(int x, int l, int r, const vector<int>& v) {
    int m = (l+r)/2;
    bool res = false;
    if(x == v[m]) return true;
    else if (m -1 >= 0) {
        if(v[m-1] < v[m] and x < v[m]) res = bin_search_asc(x,l,m-1,v);
        else if( v[m-1] > v[m]) res = search_uni(x,l,m-1,v); 
    }
    if( not res and m+1 < v.size()) {
        if(v[m] > v[m+1] and x < v[m]) return bin_search_desc(x,m+1,r,v);
        else if(v[m] < v[m+1]) return search_uni(x,m+1,r,v);
    }
    return res;
}

bool search(int x, const vector<int>& v) {
    return search_uni(x,0, v.size()-1,v);
}

int main() {
    int x, aux;
    vector<int> v;
    cin >> x;

    while(cin >> aux) {
        v.push_back(aux);
    }

    cout << search(x,v) << endl;
}