#include <iostream>
using namespace std;

int main() {
    int n,cont = 1;
    bool found = false;
    
    while(not found and cin >> n) {
        string word1,word2;
        int cont2 = 0;
        
        if(n < 2) found = true;
        else {
            cin >> word1;
            
            for (int i = 0; i < n; ++i) {
                if (word1 <= word2) {
                    cont2 += 1;
                }
                if(cont2 >= n-1 and cont2 != 0) {
                    found = true;
                }
                if (i > 0) word1 = word2;
                if (i != n-1) cin >> word2;
            }
            if (not found) cont +=1;
        }
    }
    if(found) cout << "The first line in increasing order is " << cont << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
