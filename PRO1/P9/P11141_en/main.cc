#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int size = stu.size();
    int cont = 0;
    min = 10;
    max = 0;
    avg = 0;
    
    for (int i = 0; i < size; ++i) {
        if (stu[i].mark != -1 and not stu[i].repeater) {
            if (stu[i].mark < min) min = stu[i].mark;
            if (stu[i].mark > max) max = stu[i].mark;
            avg += stu[i].mark;
            ++cont;
        }
    }
    if (cont != 0) avg /= double(cont);
    else {
        min = -1;
        avg = -1;
        max = -1;
    }
}

int main() {
    int n;
    cin >> n;
    vector <Student> stu(n);
    double min = -1.0, max = -1.0, avg = -1.0;
    for (int i = 0; i < n; ++i){
        cin >> stu[i].idn >> stu[i].name >> stu[i].mark >> stu[i].repeater;
    }
    information(stu,min,max,avg);
}
