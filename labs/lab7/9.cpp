#include <bits/stdc++.h>
using namespace std;

int n = 1;

int Sum(int sum){
    if(n == 0) return sum;
    cin >> n;
    return Sum(sum + n);   
}

int main(){
    cout << Sum(0);
}