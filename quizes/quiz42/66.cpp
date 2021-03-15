#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int m;
    cin >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    int z = 0, x = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            z = 0;
            for (int k = 0; k < n; k++){
                if(k != j){
                    if(a[i] == b[j] + b[k]){
                        cout << "YES" << endl;
                        z = 1;
                        break;
                    }
                }
            }
            if(z == 1) break;
        }
        if(z == 0) cout << "NO" << endl;
        z = 0;
    }
}