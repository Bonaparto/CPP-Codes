#include <bits/stdc++.h>
using namespace std;

int f1(char x, int a, int b){
    if(x == '+') return a + b;
    if(x == '*') return a * b;
    if(x == '-') return a - b;
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <string> v1;
    for(int i = 0; i < n; ++i){
        char x, y, z; int a, b;
        cin >> x >> y >> a >> z >> b;
        string s;
        s += y; s += " "; s += x; s += " ";
        s += z; s += " = ";
        v1.push_back(s);
        v.push_back(f1(x, a, b));
    }
    for(int i = 0; i < n; ++i){
        cout << v1[i] << v[i] << endl;
    }
}