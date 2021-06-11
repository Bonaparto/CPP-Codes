#include <iostream>
using namespace std;
int main(){
    int x = -123123123, x1;
    cin >> x1;
    while(cin >> x){
        if(x <= x1){
            cout << "NO";
            return 0;
        }
        x1 = x;
    }
    cout << "YES";
}