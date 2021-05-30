#include <iostream>
using namespace std;
int main(){

int n,m,n1,m1;

cin >> n >> m >> n1 >> m1;

if((n1 - n < 2 && m1 - m < 2) && (n - n1 < 2 && m - m1 < 2)) cout << "YES";
else cout << "NO";
}