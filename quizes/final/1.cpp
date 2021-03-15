#include <bits/stdc++.h>
using namespace std;



int main(){
    vector <pair<int, int> > vv(7)
    for(int i = 0; i < 7; ++i){
        vv[i] = make_pair(i,)
    } 
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        for(int j = 6; j > 0; --j){
            int cnt = 0; bool c = 0;
            vector <int> v = vv;
            int k = v[j];
            for(int l = 0; l < k; ++l){
                if(j == 6){

                }
                if(x >= k){
                    if(j == 6) x -= 100;
                    if(j == 5) x -= 50;
                    if(j == 4) x -= 20;
                    if(j == 3) x -= 10;
                    if(j == 2) x -= 5;
                    if(j == 1) x -= 2;
                    if(j == 0) x -= 1;
                    v[j]--;
                }
                if(x == 0){
                    cout << "Transaction accepted!";
                    c = 1;
                    break;
                }
                if(x < 0){
                    a[j] += cnt
                    c = 1;
                    cout << "Transaction stopped!";
                    break;
                }
            }
            if(c) break;
        }
    }
}