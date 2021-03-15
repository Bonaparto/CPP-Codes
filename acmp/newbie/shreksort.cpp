#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n], m = n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n / 2; ++i){
        int max = -1000000000, x;
        for(int j = 0; j < m; ++j){
            if(a[j] > max){
                max = a[j];
                x = j;
            }
        }
        swap(a[x],a[m-1]);
        m--;
        cnt += max;
    }
    for(int i = 0; i < n / 2; ++i) cnt -= a[i];
    cout << cnt;
}