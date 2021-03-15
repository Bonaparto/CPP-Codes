#include <iostream>
using namespace std;
int main(){
    int a1, a2, n, cnt = 0;
    cin >> a1 >> a2 >> n;
    int d = a2 - a1;
    if(n == 1){
        cout << a1;
        return 0;
    }
    if(n == 2){
        cout << a2;
        return 0;
    }
    for(int i = 2; i < n; ++i){
        a2 += d;
    }
    cout << a2;
}