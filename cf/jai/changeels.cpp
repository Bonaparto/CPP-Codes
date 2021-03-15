#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int x, d;
        cin >> x >> d;
        int a[x]; bool z = 0;
        for(int i = 0; i < x; ++i){
            cin >> a[i];
            if(a[i] > d) z = 1;
        }
        if(!z){
            cout << "YES" << endl;
            continue;
        }
        for(int i = 0; i < x; ++i){
            if(a[i] <= d && i == x - 1){
                cout << "YES" << endl;
            }
            if(a[i] <= d) continue;
            bool y = 0;
            for(int j = 0; j < x; ++j){
                if(j == i) continue;
                if(y) break;
                for(int k = 0; k < x; ++k){
                    if(k == i || k == j) continue;
                    if(a[j] + a[k] <= d){
                        y = 1; break;
                    }
                }
            }
            if(!y){
                cout << "NO" << endl;
                break;
            }
            if(i == x - 1) cout << "YES" << endl;
        }
    }
}