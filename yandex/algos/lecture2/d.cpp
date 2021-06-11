#include <iostream>
using namespace std;
int main(){
    int x, x1, x2, cnt = 0, ans = 0;
    while(cin >> x)
    {
        cnt++;
        if(cnt >= 3)
        {
            if(x1 > x && x1 > x2) ans++;
        }
        if(cnt >= 2)
        {
            x2 = x1;
            x1 = x; 
        }
        if(cnt == 1)
        {
            x1 = x;
        }
    }
    cout << ans;
}