#include <bits/stdc++.h>
using namespace std;

int fact(int one){
    if(one == 0) return 1;
    else{
        return one * fact(one - 1);
    }
}

int nizk(int one, int two){
    return fact(one) / (fact(two) * fact(one-two));
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << nizk(n,k);
}