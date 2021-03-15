#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(m != 0){
        int c = n % m;
        n = m;
        m = c;
    }
    cout << n;
}