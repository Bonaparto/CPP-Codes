#include <bits/stdc++.h>
using namespace std;

void tobinary(int a){
    string y = "";
    while(a > 0){
        y = char(a % 2 + 48) + y;
        a /= 2;
    }
    cout << y << endl;    
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), tobinary);
}