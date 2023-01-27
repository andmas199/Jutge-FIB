#include <iostream>
using namespace std;

int main() {
    int n,cont = 1,aux = 0;
    
    while( cin >> n) {
        string word1,word2;
        int cont2 = 0;
        
        if(n < 2) {
            if (n == 1) cin >> word1;
            aux = cont;
        }
        else {
            cin >> word1;
            
            for (int i = 0; i < n; ++i) {
                if (word1 <= word2) {
                    cont2 += 1;
                }
                if(cont2 >= n-1 and cont2 != 0) {
                    aux = cont;
                }
                if (i > 0) word1 = word2;
                if (i != n-1) cin >> word2;
            }
        }
        cont +=1;
    }
    if(aux != 0) cout << "The last line in increasing order is " << aux << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
