#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    pair <int,int> a[n];
    map <pair<int, int>, int > mp;
    map <pair<int, int>, int > :: iterator it; 
    for(int i = 0; i < n; ++i){
        int x, y, cnt = 0;
        cin >> x >> y;
        pair <int, int> p = make_pair(x, y);
        pair <int, int> p1 = make_pair(y, y);
        if(mp.insert(make_pair(p,i)).second == 0 || mp.insert(make_pair(p1,i)).second == 0))){
            mp[p]++;
        }
        else 
        
    }
    for(int i = 0; i < n; ++i){
        cout << mp[a[i]] << endl;
    } 
}