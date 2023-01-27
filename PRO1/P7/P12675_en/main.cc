#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector <int>& X, const vector <int>& Y) {
	int comuns = 0;
	int x = X.size();
	int y = Y.size();
	int i = 0;
	int j = 0;

	while (i <= x-1 && j <= y-1) {
		if (X[i] == Y[j]) {
			++comuns;
			++i;
			++j;
		} else if (X[i] > Y[j])   {
			++j;
		} else if (X[i] < Y[j])   {
			++i;
		}
	}
	return comuns;
}

   int main() {
        int n1, n2;
        cin >> n1;
        vector<int> v1(n1);

        for (int i = 0; i < n1; i++)  cin >> v1[i];
        cin >> n2;
        vector<int> v2(n2);
        for (int j = 0; j < n2; j++)  cin >> v2[j];
        cout << common_elements(v1, v2) << endl;
   }
