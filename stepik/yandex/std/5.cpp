#include <bits/stdc++.h>
using namespace std;

struct students{
    string name;
    string surname;
    double points;
};

bool bypoints(pair <students, int> a, pair <students, int> b){
    if(a.first.points == b.first.points) return a.second < b.second;
    else return a.first.points > b.first.points;
}

int main(){
    int n;
    cin >> n;
    vector <pair <students, int> > v(n);
    for(int i = 0; i < n; ++i){
        double a, b, c; string n, s;
        cin >> n >> s >> a >> b >> c;
        students temp;
        temp.name = n; temp.surname = s;
        temp.points = (a + b + c) / 3; 
        v[i] = make_pair(temp, i);
    }
    sort(v.begin(),v.end(), bypoints);
    for(int i = 0; i < n; ++i){
        cout << v[i].first.name << " " << v[i].first.surname << endl;
    }
}