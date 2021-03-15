#include <iostream>
using namespace std;
int main(){

int x;
cin >> x;
bool l = 0;

    for(int i = 2; i < x; ++i){
        if(x % i == 0) l = 1;
    }
    if(l == 1) cout << "NO";
    else cout << "YES";
}
