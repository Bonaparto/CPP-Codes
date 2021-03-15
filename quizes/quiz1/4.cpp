#include <iostream>
using namespace std;
int main(){
int a, n, b, k, A, B; 
cin >> a >> n >> b >> k;
 
    for(int i = 0; i <= n; i++){
        A = a % 2;
        a = a / 2;
    }
    for(int j = 0; j <= k; j++){
        B = b % 2;
        b = b / 2;
    }
    if(A == B) cout << "Money was found";
    else cout << "Where is the money Lebowski?";
}