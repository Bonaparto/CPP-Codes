#include <bits/stdc++.h>
using namespace std;

struct participant{
    string country,
            name,
            surname,
            best;
    vector <string> jumps;
};

bool best_jumps(participant a, participant b){
    return a.jumps > b.jumps;
}

int main(){
    int n;
    cin >> n;
    vector <participant> v;
    for(int i = 0; i < n; ++i){
        participant x;
        string c, n, s;
        cin >> c >> n >> s;
        vector <string> trials;
        int cnt = 0;
        for(int j = 0; j < 6; ++j){
            string a; cin >> a;
            if(a == "x"){
                trials.push_back("0");
                cnt++;
            }
            else trials.push_back(a);
        }
        if(cnt != 6){
            sort(trials.begin(), trials.end(), greater<string>());
            x.best = trials[0];
            x.jumps = trials;
            x.country = c;
            x.name = n;
            x.surname = s;
            v.push_back(x);
        }
    }
    if(v.size() == 0){
        cout << "No results.";
        return 0;
    }
    sort(v.begin(), v.end(), best_jumps);
    for(int i = 0; i < v.size(); ++i){
        if(i == 3) return 0;
        cout << i + 1 << ") ";
        cout << v[i].country << " " << v[i].name << " " << v[i].surname << " " << v[i].best << endl;
    }
}