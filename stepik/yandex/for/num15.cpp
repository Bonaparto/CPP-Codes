#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    bool a[b] = {0};
    for(int i = 0; i < n; ++i){
        int l, r;
        cin >> l >> r;  
        while(l - 1 < = r - 1) a[r] = 1;
    }
    for(int i = 0; i < n; ++i){
        if(a[i] == 0) cout << "I";
        else cout << ".";
    }
}