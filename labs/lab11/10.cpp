#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, n;
    cin >> x >> y >> n;
    multimap <double, pair<int,int> > mp;
    for(int i = 0; i < n; ++i){
        double a, b;
        cin >> a >> b;
        mp.insert({sqrt(pow((x - a),2) + pow((y - b),2)), {a,b}});
    }
    multimap <double , pair<int,int> > :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it){
        cout << (*it).second.first << " " << (*it).second.second << endl;
    }
}