#include <bits/stdc++.h>
using namespace std;

void comparator(vector < vector <int> >& a){
   vector <int> f;
   multimap <int, int> b;
   for(int i = 0; i < a.size(); ++i){
        int sum = 0;
        for(int j = 0; j < a[i].size(); ++j){
            sum += a[i][j];
        }
        f.push_back(sum);
    }
    for(int i = 0; i < f.size(); ++i){
        for(int j = 0; j < a[i].size(); ++j){
            
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> g;
    vector < vector <int> > l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        for(int j = 0; j < x; ++j){
            int y;
            cin >> y;
            g.push_back(y);
        }
        l.push_back(g);
    }
    comparator(l);
}