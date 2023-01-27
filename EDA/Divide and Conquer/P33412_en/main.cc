#include <vector>
using namespace std;

bool dic_b(int left,int right, double x, const vector<double>& v) {
    if (left > right) return false;
    else {
        int m = (left+right)/2;
        if (v[m] == x or (m-1 >= 0 and v[m-1] == x) or (m+1 <= v.size() - 1 and v[m+1] == x))return true;
        else if (v[m] < x) return dic_b(m+1,right,x,v);
        else if (v[m] > x) return dic_b(left,m-1,x,v);
    }
    return false;
}

bool resistant_search(double x, const vector<double>& v) {
    return dic_b(0,v.size()-1,x,v);
}