#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    bool l = 0;

    for(int i = 0; i < n; ++i){
        if(n == i * i) l = 1;
    }
    if(l == 1) cout << "YES";
    else cout << "NO";
}
