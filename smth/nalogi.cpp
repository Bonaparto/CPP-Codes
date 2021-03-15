#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    double c[n], max = -1;
    for(int i = 0; i < n; ++i){
        c[i] = a[i] * b[i] * 0.01;
        if(c[i] > max){
            max = c[i];
            k = i;
        }
    }
    cout << k;
}