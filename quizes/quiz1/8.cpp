#include <iostream>
using namespace std;
int main(){
int N;
cin >> N;
int sum1 = 0, sum2 = 0, A;
while(N > 0){
    A = (N % 10);
    N = N / 10;
    if(A % 2 == 1)
    sum2 += A;
    if(A % 2 == 0)
    sum1 += A;
    }
    if(sum2 > sum1) cout << sum2;
    if(sum1 > sum2) cout << sum1; 
    if(sum1 == sum2) cout << (sum2 + sum1);
}