#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> l;
    vector <int> f;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x % 2 == 0){
            l.push_back(x);
        }
        else f.push_back(x);
    }
    sort(l.begin(),l.end());
    sort(f.begin(),f.end());
    for(int i = l.size() - 1; i >= 0; --i){
        cout << l[i] << " ";
    }
    for(int i = 0; i != f.size(); ++i){
        cout << f[i] << " ";
    }    
}