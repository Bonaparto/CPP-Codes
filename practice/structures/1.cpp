#include <bits/stdc++.h>
using namespace std;

struct dude{
    string name, surname, birth;
    int point;
};

bool dudee(dude a, dude b){
    return a.point > b.point;
}

int main(){
    int n;
    cin >> n;
    vector <dude> v;
    for(int i = 0; i < n; ++i){
        string n, s, b; int p;
        dude temp;
        cin >> n >> s >> b >> p;
        temp.name = n;
        temp.surname = s;
        temp.birth = b;
        temp.point = p;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), dudee);
    for(int i = 0; i < n; ++i){
        cout << v[i].name << " " << v[i].surname << " " << v[i].birth << " " << v[i].point << endl;   
    }
}