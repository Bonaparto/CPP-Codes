#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair <double, pair <int,int> > > v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i].second.first >> v[i].second.second;
        v[i].first = sqrt(pow(v[i].second.first, 2) + pow(v[i].second.second, 2));
        cout << v[i].first << endl;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i)
    cout << v[i].second.first << " " << v[i].second.second << endl;
}