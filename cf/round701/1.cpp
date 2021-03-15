#include <iostream>
#include <cmath>
using namespace std;

void solve(int a, int b){
    int min = 1000000; bool f = 0;
    for(int j = b; j < b + 1000; ++j){
        if(j == 1) continue;
        for(int i = 1;; ++i){
            if(pow(j, i) > a){
                if(j - b + i <= min){
                    min = j - b + i;
                    break;
                }
                else{
                    cout << min << endl;
                    return;
                }
            }
        }
    }  
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y; cin >> x >> y;
        if(x < y){
            cout << 1 << endl;
            continue;
        }
        solve(x, y);
    }
}
