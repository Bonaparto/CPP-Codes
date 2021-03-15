#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, total = 0;
    cin >> n;
    vector <string> g;
    vector <float> b;
    multimap <float, string> d;
    for(int i = 0; i < n; ++i){
        int l;
        cin >> l;
        total += l;
        for(int j = 0; j < l + l; ++j){
            if(j % 2 != 0){
                string s;
                getline(cin, s);
                g.push_back(s);
            }
            else{
                float a;
                cin >> a;
                b.push_back(a);
            }
        }
    }
    for(int i = 0; i < g.size(); ++i){
        d.insert(make_pair(b[i], g[i]));
    }
    
    sort(b.begin(), b.end());
    multimap<float, string> :: reverse_iterator rit;
    cout << total << endl;
    int v = 0;
    for(rit = d.rbegin(); rit != d.rend(); ++rit){
        v++;
        if(v == b.size()){
            printf("%.2f", (*rit).first);
            cout << (*rit).second;   
        }
        else{
            printf("%.2f", (*rit).first);
            cout << (*rit).second << endl;
        }
    }
}