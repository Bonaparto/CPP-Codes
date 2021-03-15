#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    double time = 0, v;
    cin >> n >> v >> l;
    int a[n][2];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> a[i][j];
        }
        time += a[i][1];
    }
    time += (l / v) * 60;
    printf("%.2f\n", time);
}