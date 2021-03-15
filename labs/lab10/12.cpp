#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, size = 0, l = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        size += i;
    }
    vector <int> v(size);
    for(int i = 1; i <= n; ++i){
        fill(v.begin() + l, v.begin() + i + l, i);
        l += i;
    }
    for(int i = 0; i < size; ++i){
        cout << v[i] << " ";
    }
}