#include <iostream>
using namespace std;
int main() {

int n,m,t;

cin >> n >> m >> t;

if(n < m + t && m < n + t && t < m + n){

    cout << "YES";
} else {
    cout << "NO";
}
return 0;
}