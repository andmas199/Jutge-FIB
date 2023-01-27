#include <iostream>
#include <map>
#include <set>
using namespace std;

struct classcomp {
    bool operator() (const pair<string,int>& a, const pair<string,int>& b) const {
        if (a.second != b.second) return a.second > b.second;
        else return a.first < b.first;
    }
};

int main() {
    string comando;
    map<string, pair<int, bool> > jugadores;
    set<pair <string,int>,classcomp> ranking;


    while(cin >> comando) {
        string j1;
        cin >> j1;
        if (comando == "LOGIN") {
            if (jugadores.find(j1) == jugadores.end()) {
                jugadores[j1].first = 1200;
                jugadores[j1].second = true;
            }
            else if (!jugadores[j1].second) {
                jugadores[j1].second = true;
            }
        }
        else if (comando == "LOGOUT") {
            if (jugadores.find(j1) != jugadores.end() and  jugadores[j1].second) {
                jugadores[j1].second = false;
            }
        }
        else if (comando == "PLAY") {
            string j2;
            cin >> j2;
            if (jugadores.find(j1) != jugadores.end() and jugadores.find(j2) != jugadores.end() and jugadores[j1].second and jugadores[j2].second) {
                jugadores[j1].first +=10;
                jugadores[j2].first -= 10;
                if (jugadores[j2].first < 1200) jugadores[j2].first = 1200;
            }
            else cout << "player(s) not connected" << endl;
        }
        else if (comando == "GET_ELO") {
            cout << j1 << " " << jugadores[j1].first << endl;
        }
    }

    for(auto it : jugadores) {
        ranking.insert(pair<string,int>(it.first,it.second.first));
    }

    cout << endl << "RANKING" << endl;
    for(auto it : ranking) {
        cout << it.first << " " << it.second << endl;
    }

}
