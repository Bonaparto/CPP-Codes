#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    while(n != 0){
        if(n % 2 != 0) cnt++;
        n /= 2;
    }
    cout << cnt;
}