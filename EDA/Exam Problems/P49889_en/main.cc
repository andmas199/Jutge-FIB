#include <iostream>
#include <vector>
using namespace std;


void read_vector(vector<char>& v,int n) {
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

bool already_written(vector<char>& sol,int last,int puntero) {
    for(int i = 0; i < puntero; ++i) {
        if(sol[i] == last) return true;
    }
    return false;
}

void write_vector(vector<char>& sol,int n) {
    for(int i = 0; i < n; ++i) {
        cout << sol[i];
    }
    cout << endl;
}

void generate_words(vector<char>& consonantes, vector<char>& vowels,vector<char>& sol,int n, int puntero) {
    if(not already_written(sol,sol[puntero-1],puntero-1)) {
        if(puntero == 2*n) write_vector(sol,2*n);
        else if(puntero % 2 == 0) {
            for(int i = 0; i < n; ++i) {
                sol[puntero] = consonantes[i];
                generate_words(consonantes,vowels,sol,n,puntero+1);
            }
        }
        else {
            for(int i = 0; i < n; ++i) {
                sol[puntero] = vowels[i];
                generate_words(consonantes,vowels,sol,n,puntero+1);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<char> consonantes(n);
    vector<char> vowels(n);
    vector<char> sol(2*n);
    read_vector(consonantes,n);
    read_vector(vowels,n);
    generate_words(consonantes,vowels,sol,n,0);
}