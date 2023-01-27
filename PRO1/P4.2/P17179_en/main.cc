#include <iostream>
using namespace std;

int main() {
    cout.precision(4);
    cout.setf(ios::fixed);
    int veces;
    cin >> veces;
    
    for (int i = 0; i < veces; ++i) {
        int n;
        double num1,min,max,av = 0;
        cin >> n >> num1;
        av = min = max = num1;
        for (int j = 0; j < n-1; ++j) {
            double num2;
            cin >> num2;
            if(min > num2) min = num2;
            if(max < num2) max = num2;
            num1 = num2;
            av += num2;
        }
        cout << min << " " << max << " " << av/n << endl;
    }


}
