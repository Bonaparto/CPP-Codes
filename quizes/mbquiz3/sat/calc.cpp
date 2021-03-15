#include <bits/stdc++.h>
using namespace std;

int op(char a, int x, int y){
    if(a == '+') return x + y;
    if(a == '-') return x - y;
    if(a == '*') return x * y;   
}

int main(){
    int n;
    cin >> n;
    vector <string> v;
    vector <int> v1;
    for(int i = 0; i < n; ++i){
        char x, y, z;
        int a, b;
        cin >> z >> x >> a >> y >> b;
        string g;
        g += x; g += " "; g += z; g += " "; g += y;
        g += " = ";
        v1.push_back(op(z, a, b)); 
        v.push_back(g);    
    }
    for(int i = 0 ; i < v.size(); ++i){
        cout << v[i] << v1[i] << endl;
    }
}