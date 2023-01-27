#include <iostream>
using namespace std;

int main(){
    int cont = 1, cont_def = 0;
    string ref,word;
    cin >> ref;
    
    while(cin >> word) {
        if (word == ref) ++cont;
        if (cont_def < cont) cont_def = cont;
        if (word != ref) {
            cont = 0;
        }
    }
    if (cont_def == 0) cont_def = 1;
    cout << cont_def << endl; 
}
