#include <iostream>
using namespace std;
int main() {

int n,m,t;
cin >> n >> m >> t;

if(n == t && n == m){
cout << "3";
} else if(n == t || n == m){
    cout << "2";
    } else {
        cout << "0";
    }

    return 0;
}