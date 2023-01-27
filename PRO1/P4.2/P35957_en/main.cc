#include <iostream>
using namespace std;

int middle(int num,int cont) {
    int middle,aux;
    aux = middle = num;
    for (int i = 0; i < cont/2 + 1; ++i) {
        middle = aux % 10;
        aux /= 10;
    }
    return middle;

}

int main() {
    int n,a1,i = 0;
    bool found = false;
    cin >> n;
    
    while (not found and i < 2*n) {
        int b1,num_mid,conta = 0,contb = 0,auxi;
        cin >> a1 >> b1;
        
        auxi = a1;
        while (a1 != 0) {
            conta += 1;
            a1 /= 10;
        }
        a1 = auxi;
        auxi = b1;
        while (b1 != 0) {
            contb += 1;
            b1 /= 10;
        }
        b1 = auxi;
            
        if (i == 0) num_mid = middle(a1,conta);
        if(conta % 2 == 0 and a1 != 0){
            cout << "B" << endl;
            found = true;
        }
        else if(contb % 2 == 0 and b1 != 0){
            cout << "A" << endl;
            found = true;
        }
        else {
            if (middle(a1,conta) != num_mid) {
                cout << "B" << endl;
                found = true;
            }
            else if (middle(b1,contb) != num_mid) {
                cout << "A" << endl;
                found = true;
            }
        }
        ++i;
    }
    if (not found) cout << "=" << endl;
}
