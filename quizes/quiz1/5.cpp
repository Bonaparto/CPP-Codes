#include <iostream>
using namespace std;
int main(){

int N, M, ans =  0;
cin >> N >> M;
    if(M % N == 0 && M < N) cout << N;
    while(M % N != 0){
        M--;
        ans++;
    }
cout << ans;
}