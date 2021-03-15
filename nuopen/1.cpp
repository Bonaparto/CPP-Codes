#include <bits/stdc++.h>
using namespace std;
int main(){
    int X, Y, Z, n;
    cin >> X >> Y >> Z >> n;
    vector<pair <double,int> > c;
    vector <double> a, b;
    multiset<pair <double, int> > m;
    for(int i = 0; i < n; ++i){
        double x;
        cin >> x;
        a.push_back(x/100000);
    }
    for(int i = 0; i < n; ++i){
        double x;
        cin >> x;     
        b.push_back(x/100000);
    }
    for(int i = 0; i < n; ++i){
        m.insert(make_pair((1 - b[i]) * a[i],i));
    }
    multiset <pair <double, int> > :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        c.push_back(*it);
    }
    for(int i = c.size() - 1; i >= 0; --i){
        if(c[i].first != c[i-1].first){
            cout << c[i].second + 1 << " " << c[i].first << endl;
        
        }
    }
}