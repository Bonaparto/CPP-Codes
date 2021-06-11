#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool partis(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

int main(){
    int n;
    cin >> n;
    vector <pair<int,int> > v;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(y, x));
    }
    sort(v.begin(), v.end(), partis);
    for(int i = 0; i < n; ++i)
    cout << v[i].second << " " << v[i].first << endl;
}