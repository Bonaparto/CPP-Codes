#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n], max = 0, max1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] > a[max]) max = i;
    }
    cnt = a[max] * (max + 1);  
    max1 = max;
    for(int i = max; i < n; ++i){
        a[max] = 0;
        for(int j = max + 1; j < n; ++j){
            if(a[j] > a[max]) max = j;
        }
        cnt += (a[max] * (max - max1));
        max1 = max;
    }
    cout << cnt;
}