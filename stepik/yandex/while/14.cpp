#include <iostream>
using namespace std;
int main(){
    int n = 1, max = 0, cnt = 1000000000, cnt1 = 0, cnt2 = 0, f = 0;
    while(n!= 0){
        f++;
        cin >> n;
        if(f == 1){continue;}
        cnt1++;
        if(max < n){
            cnt2 = 0;
            cnt1 = 0;
            max = n;
            continue;
        }
        if(n == max){
            cnt2++;
            if(cnt1 < cnt){
                cnt = cnt1;
                cnt1 = 0;
            }
        }
    }
    if(cnt2 == 0) cout << "0";
    else cout << cnt - 1;
}