#include <iostream>
using namespace std;

long long fact(int x){
    long long a = 1;
    for(int i = 1; i <= x; ++i){
        a *= i;
    }
    return a;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << fact(n) / (fact(k) * fact(n-k));
}