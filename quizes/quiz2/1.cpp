#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
       cin >> a[i];
    }
    int max = a[0], min = max;
    for(int i = 0; i < n; ++i){
        if(a[i] > max){max = a[i];}
        if(a[i] < min){min = a[i];}
    }
    cout << abs(max - min - n + 1);
} 