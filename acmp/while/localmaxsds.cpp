#include <iostream>
using namespace std;
int main(){ 
    int x, cnt = 0, cnt1 = 1, x1, x2, min = 1000000000; bool a = 0;
    cin >> x;
    x1 = x;
    while(x != 0){
        cin >> x;
        cnt1++;
        if(a) cnt++;
        if(cnt1 == 2) x2 = x;
        if(cnt1 >= 3){
            if(x2 > x1 && x2 > x && x != 0){
                if(cnt - 1 < min && cnt != 0) min = cnt - 1;
                cnt = 1;
                a = 1;
            }
            x1 = x2;
            x2 = x;
        }

    }
    cout << (min == 1000000000?0:min);
}