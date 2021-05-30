#include <iostream>
using namespace std;
int main() {

int n,m;
cin >> n >> m;
if(n > m){
    cout << 1;
    } else if(n < m){
        cout << 2;
    } else{
        cout << 0;
    }

    return 0;
}