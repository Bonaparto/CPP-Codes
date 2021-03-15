#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string k, g;
    cin >> n;
    bool a[n];
    for(int i = 0; i < n; ++i){
        cin >> k >> g;
        if(k.size() <= g.size()){
            for(size_t j = 0; j < g.size(); ++j){
                if((k.find(g[j]) == string::npos) || ((g.find(k[j]) == string::npos) && j < k.size())){
                    a[i] = false;
                    break;  
                }
                a[i] = true;
            }
        }
        else{
            for(size_t j = 0; j < k.size(); ++j){
                if((g.find(k[j]) == string::npos) || ((k.find(g[j]) == string::npos) && j < g.size())){
                    a[i] = false;
                    break;
                }
                a[i] = true;
            }
        }
    }
    for(int i = 0; i < n; ++i){        
        if(a[i] == true && i != n - 1) cout << "YES" << endl;
        if(a[i] == false && i != n - 1) cout << "NO" << endl;
        if(i == n - 1 && a[i] == true) cout << "YES";
        if(i == n - 1 && a[i] == false) cout << "NO";
    }
}