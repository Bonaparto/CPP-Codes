#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int m = n, cnt = 0;
    for(int i = 0; i < (n / 2) + 1; ++i){
        int min = 1000000000, x;
        for(int j = 0; j < m; ++j){
            if(a[j] < min){
                min = a[j];
                x = j;
            }
        }
        swap(a[x],a[m-1]); m--;
        cnt += ((min / 2) + 1);
    }
    cout << cnt;
}