#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, y;
    cin >> n >> y;
    vector <int> l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < l.size(); ++i){
            if(l[i] == y)
                cnt++;
    }
    cout << cnt;
}