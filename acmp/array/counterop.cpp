#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int max = 0, min = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > a[max]) max = i;
        if(a[i] < a[min]) min = i;
    }
    for(int i = 0; i < n; ++i){
        if(a[i] == a[max]) cout << a[min] << " ";
        else cout << a[i] << " ";
    }
}