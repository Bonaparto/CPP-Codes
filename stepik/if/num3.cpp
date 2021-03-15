#include <iostream>
using namespace std;
int main() {

int n,m,t;
cin >> n >> m >> t;
if(n >= m && n >= t){
    cout << n;
} else if(m >= n && m >= t){
    cout << m;
} else {
    cout << t;
}


    return 0;
}