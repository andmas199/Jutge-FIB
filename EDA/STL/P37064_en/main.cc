#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string word;
    priority_queue<string> left;
    priority_queue<string, vector<string>, greater<string>> right;

    while (cin >> word and word != "END") {        
        if (!right.empty() and word > right.top()) right.push(word);
        else left.push(word);

        int left_s = left.size();
        int right_s = right.size();

        if ((left_s - right_s) == 2) {
                right.push(left.top());
                left.pop();
        }
        else if((right_s - left_s) == 2) {
                left.push(right.top());
                right.pop();
            }
        left_s = left.size();
        right_s = right.size();
        
        if (not left.empty() and ((left_s + right_s) % 2 == 0 or left_s >= right_s)) cout << left.top() << endl;
        else if (not right.empty()) cout << right.top() << endl;
        }
}