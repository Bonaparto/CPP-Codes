#include <bits/stdc++.h>
using namespace std;

int fact(int one){
    if(one == 0) return 1;
    else{
        return one * fact(one - 1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << fact(n);
}