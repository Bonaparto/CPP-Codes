#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair <pair <double, int>, pair <int, string> > > v;
    for(int i = 0; i < n; ++i){
        double x; string y;
        cin >> x >> y;
        int l = x;
        if(y.size() == 2){
            if(y[0] == 'm') x /= 1000;
            if(y[0] == 'k') x *= 1000; 
            if(y[0] == 'M') x *= 1000000;
            if(y[0] == 'G') x *= 1000000000; 
        }
        if(y[0] == 'g' || y[1] == 'g') x /= 1000000;
        if(y[0] == 'p' || y[1] == 'p'){ x /= 1000000; x *= 16380;}  
        v.push_back(make_pair(make_pair(x, i), make_pair(l, y)));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i)
        cout << v[i].second.first << " " << v[i].second.second << endl;   
}