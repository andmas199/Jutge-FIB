#include <vector>
using namespace std;

int bus_dico(int left, int right, double x, const vector<double>& v) {
    int m = (left+right)/2;
    if (left > right) return -1;
    else {
        if(v[m] == x) {
            if (left == right) return m;
            else return bus_dico(left,m,x,v);
        }
        else if (v[m] < x) return bus_dico(m+1,right,x,v);
        else if (v[m] > x) return bus_dico(left,m-1,x,v);
    }
    return -1;
}

int first_occurrence(double x, const vector<double>& v) {
    return bus_dico(0,v.size()-1,x,v);
}