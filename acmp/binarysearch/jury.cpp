#include <iostream>
using namespace std;
int main(){
    char x; int L = 1, R = 1000000000;
    while(L <= R){
        int mid = (L + R) / 2;
        cout << mid << endl;
        cout.flush();
        cin >> x;
        if(x == '>') L = mid + 1;
        if(x == '<') R = mid;
        if(x == '=') return 0;
    }
}