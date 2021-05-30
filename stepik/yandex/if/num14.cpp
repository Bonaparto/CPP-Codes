#include <iostream>
using namespace std;
int main(){
    int N, M, X, Y, l, k;
    cin >> N >> M >> X >> Y;
    l = M; k = N;
    if(N >= M){
      l = N;  
      k = M;
    } 
    if(X > k / 2) X = k - X;
    if(Y > l / 2) Y = l - Y;
    cout << min(X, Y); 
}