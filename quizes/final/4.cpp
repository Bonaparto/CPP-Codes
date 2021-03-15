#include <bits/stdc++.h>
using namespace std;

bool sortt(pair <double, pair<string,string> > a, pair <double, pair<string,string> > b){
    if(a.first == b.first){
        if(a.second.first == b.second.first)
        return a.second.second < b.second.second;
        else return a.second.first < b.second.first;
    }
    else return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector <pair<double, pair<string,string> > > m;
    for(int i = 0; i < n; ++i){
        string n, s; int x; double sum = 0, cnt = 0;
        cin >> n >> s >> x;
        for(int j = 0; j < x; ++j){
            string a; int b;
            cin >> a >> b;
            cnt += b;
            if(a == "A+") sum += 4 * b;
            if(a == "A") sum += 3.75 * b;
            if(a == "B+") sum += 3.5 * b;
            if(a == "B") sum += 3 * b;
            if(a == "C+") sum += 2.5 * b;
            if(a == "C") sum += 2 * b;
            if(a == "D+") sum += 1.5 * b;
            if(a == "D") sum += 1 * b;
            if(a == "F") sum += 0 * b; // useless line
        }
        m.push_back(make_pair(sum / cnt, make_pair(n, s)));
    }
    sort(m.begin(),m.end(),sortt);
    for(int i = 0; i < m.size(); ++i){
        cout << m[i].second.first << " " << m[i].second.second << " ";
        printf("%.3f", m[i].first);
        cout << endl;
    }
}