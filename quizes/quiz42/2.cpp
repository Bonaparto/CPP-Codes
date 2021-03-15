#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, m;
    cin >> n >> m;
    set <pair <int, int> > ss;
    set <int> s;
    for(int i = n; i <= m; ++i){
        int l = i, cnt = 0;
        while(l != 0){
            cnt++;
            s.insert(l % 10);
            ss.insert(make_pair(cnt, l % 10));
            l /= 10;
        }
        if(s.size() == cnt){
            set <pair<int, int> > :: reverse_iterator it;
            for(it = ss.rbegin(); it != ss.rend(); ++it){
                cout << (*it).second;
            }
            return 0;
        }
        ss.clear();
        s.clear();
    }
    cout << "Understandable, have a great day";
}