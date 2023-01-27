#include <iostream>
#include <vector>
using namespace std;

bool already_written(vector<char>& sol,int puntero) {
    for(int i = 0; i < puntero-1; ++i) {
        if(sol[i] == sol[puntero-1]) return true;
    }
    return false;
}

void write_vector(vector<char>& sol, int n) {
    for (int i = 0; i < n; ++i) {
        cout << sol[i];
    }
    cout << endl;
}

void generate_comb(vector<char>& sol,const char letters[], int n,int puntero) {
    if(puntero == n) write_vector(sol,n);
    else {
        for(int i = 0; i < 4; ++i) {
            sol[puntero] = letters[i];
            generate_comb(sol,letters,n,puntero+1);
        }
    }
}

int main() {
    const char letters[4] = {'A','C','G','T'};
    int n;
    cin >> n;
    vector<char> sol(n);
    generate_comb(sol,letters,n,0);

}