#include <bits/stdc++.h>
using namespace std;

bool similarity(string x, string y){
    for(int i = 0; i < x.size(); ++i){
        x[i] = tolower(x[i]);
        if(x[i] == 'b')
        x[i] = 'p';
        if(x[i] == 'i')
        x[i] = 'e';
    }
    for(int i = 0; i < y.size(); ++i){
        y[i] = tolower(y[i]);
        if(y[i] == 'b')
        y[i] = 'p';
        if(y[i] == 'i')
        y[i] = 'e';
    }
    return x == y;
}

int main(){
    int n;
    cin >> n;
    vector <bool> v;
    for(int i = 0; i < n; ++i){
        string x, y;
        cin >> x >> y;
        v.push_back(similarity(x,y));
    }
    for(int i = 0; i < v.size(); ++i){
        cout << (v[i]?"Yes":"No") << endl;
    }
}