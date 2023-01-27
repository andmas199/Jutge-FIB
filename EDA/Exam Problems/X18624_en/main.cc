#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void read_letters(vector<char>& letters, int n_letters) {
    for(int i = 0; i < n_letters; ++i) {
        cin >> letters[i];
    }
}

bool is_repeated_vowel(vector<char>& sol,int puntero) {
    if(sol[puntero] != 'a' and sol[puntero] != 'e' and sol[puntero] != 'i' and sol[puntero] != 'o' and sol[puntero] != 'u') return false;
    else {
        if(sol[puntero-1] != 'a' and sol[puntero-1] != 'e' and sol[puntero-1] != 'i' and sol[puntero-1] != 'o' and sol[puntero-1] != 'u') return false;
        else return true;
    }
}

void write_word(vector<char>& sol,int size){
    for(int i = 0; i < size; ++i) {
        cout << sol[i];
    }
    cout << endl;
}

void generate_word(vector<char>& sol, vector<char>& letters,int size,int n_letters,int puntero) {
    if(puntero == size and not is_repeated_vowel(sol,puntero-1)) write_word(sol,size);
    else if(not is_repeated_vowel(sol,puntero-1)) {
        for(int i = 0; i < n_letters; ++i) {
            sol[puntero] = letters[i];
            generate_word(sol,letters,size,n_letters,puntero+1); 
        }
    }
}

int main() {
    int size,n_letters;
    while(cin >> size >> n_letters) {
        vector<char> sol(size);
        vector<char> letters(n_letters);
        read_letters(letters,n_letters);
        sort(letters.begin(),letters.end());

        generate_word(sol,letters,size,n_letters,0);
        cout << "----------" << endl;
    }
}