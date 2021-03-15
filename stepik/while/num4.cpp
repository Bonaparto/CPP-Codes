#include <iostream>
using namespace std;
int main(){
    int n,k=1;
    cin >> n;
    while(k <= n){
        if(k == n) cout << "YES";
        else if(k * 2 > n) cout << "NO";
        k = k * 2;
    }
}