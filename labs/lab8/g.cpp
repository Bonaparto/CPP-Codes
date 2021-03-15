#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int n){
    for(int i = 2; i * i < n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    vector<int> n;
    int l, x, cnt = 0, k;
    cin >> l;
    
    for(int i = 0; i < l; ++i){
        cin >> x;
        n.push_back(x);
    }
    cin >> k;
    
    for(int i = 0; i < l; ++i){
        if(IsPrime(n[i]) && n[i] > k)
        cnt++;
    }
    cout << cnt;
}