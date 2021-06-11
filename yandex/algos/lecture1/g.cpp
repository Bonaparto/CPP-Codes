#include <iostream>
using namespace std;
int main(){
    int N, K, M, ans = 0;
    cin >> N >> K >> M;
    if(K < M)
    {
        cout << 0; return 0;
    }
    while(N >= K)
    {
        ans += (N / K) * (K / M);
        N = (N / K) * (K % M) + N % K;
    }
    cout << ans;
}