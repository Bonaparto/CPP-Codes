#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], l = n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    double m = 0;
    cin >> m;
    for(int i = 0; i < n; ++i){
        int min = 1000000000, x;
        for(int j = 0; j < l; ++j){
            if(a[j] < min){
                min = a[j];
                x = j;
            }
        }
        if((a[x] + m) / 2 > m){
            m = (a[x] + m) / 2;
        }
        swap(a[x],a[l-1]);
        l--;
    }
    printf("%.6f", m);
}