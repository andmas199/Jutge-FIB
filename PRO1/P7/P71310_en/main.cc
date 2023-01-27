#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
    double sol = 0;
    int size = u.size();
    for(int i = 0; i < size; ++i) {
        sol += u[i]*v[i];
    }
    return sol;
}
