#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int cnt = 0, cnt2 = 0;
    for(int i = n - 1; i >= 1; --i){
        for(int j = i - 1; j >= 0; --j){
            if(a[i] < a[j]){
                
            }
        }
    }
    cout << cnt;
}