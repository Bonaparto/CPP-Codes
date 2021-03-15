#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            for(int g = 0; g < n; ++g){
                if(l[g] == (l[i] ^ l[j])){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;    
}