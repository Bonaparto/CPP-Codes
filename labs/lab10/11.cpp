#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int a){
    for(int i = 2; i * i <= a; ++i){
        if(a % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        x = abs(x);
        if(x != 0 && x != 1) v.push_back(x);
    }
    cout << count_if(v.begin(), v.end(), IsPrime);
}