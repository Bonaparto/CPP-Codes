#include <iostream>
using namespace std;
int main(){
    int L = 1, cnt = 0; long long R;
    cin >> R;
    while(L < R){
        R = (L + R) / 2;
        cnt++;
    }
    cout << cnt;
}