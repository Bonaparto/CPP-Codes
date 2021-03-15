#include <bits/stdc++.h>
using namespace std;

bool search(int * a,int x,int i,int n){
    if(i > n - 1) return false;
    if(a[i] == x) return true;
    return search(a, x, i + 1, n);
}

int main(){
    int n,x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> x;
    search(a,x,0,n)?cout << "Yes": cout << "No";
}