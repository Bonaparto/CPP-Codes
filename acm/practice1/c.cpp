#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    while(x != 0 && y != 0){
        if(cnt % 2 == 0){
            if(x == 1 && y != 1) {
                cout << 2 << " " << y - 1 << endl;
            } else if(x != 1 && y == 1) {
                cout << 1 << " " << x - 1 << endl;
            }
            if(x == 0) cout << 2 << " " << y;
            else if(y == 0) cout << 1 << " " << x;
        } else {
            int l, r;
            cin >> l >> r;
            if(l == 1) x-=r;
            else y-=r;
        } 
    }
    cout.flush(); 
}