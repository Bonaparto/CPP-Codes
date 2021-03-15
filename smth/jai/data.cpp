#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int m, x, y, z;
        cin >> m >> x >> y >> z;
        vector <int> v(m);
        v.clear();
        for(int j = 0; j < m; ++j){
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        int max = v[v.size() - 1];
        set <int> s; vector <int> v1;
        for(int l = 0; l < 3; ++l){
            int temp = max;
            v1.clear();
            s.clear();
            bool a = 1;
            if(l == 1){
                while(1){
                    temp *= x;
                    if(!s.insert(temp % 10).second) break;
                    s.insert(temp % 10);
                    v1.push_back(temp);
                }
                for(int k = 0; k < v1.size(); ++k){
                    a = 0;
                    for(int r = 0; r < v.size(); ++r){
                        if(v1[k] % v[i] != 0){
                            a = 1;
                            break;
                        }
                    }
                    if(!a){
                        cout << "She can";
                        break;
                    }
                }
            }
            if(!a) break;
            if(l == 2){
                while(1){
                    temp *= y;
                    if(!s.insert(temp % 10).second) break;
                    s.insert(temp % 10);
                    v1.push_back(temp);
                }
                for(int k = 0; k < v1.size(); ++k){
                    a = 0;
                    for(int r = 0; r < v.size(); ++r){
                        if(v1[k] % v[i] != 0){
                            a = 1;
                            break;
                        }
                    }
                    if(!a){
                        cout << "She can";
                        break;
                    }
                }
            }
            if(!a) break;
            if(l == 3){
                while(1){
                    temp *= z;
                    if(!s.insert(temp % 10).second) break;
                    s.insert(temp % 10);
                    v1.push_back(temp);
                }
                for(int k = 0; k < v1.size(); ++k){
                    a = 0;
                    for(int r = 0; r < v.size(); ++r){
                        if(v1[k] % v[i] != 0){
                            a = 1;
                        }
                    }
                    if(!a){
                        cout << "She can";
                        break;
                    }
                }
                if(!a) break;
                else cout << "She can't";
            }
        }
    }
}