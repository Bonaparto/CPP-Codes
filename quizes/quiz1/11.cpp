#include <iostream>
using namespace std;
int main(){
int a,m = 1,k = 1;

cin >> a;
for(int i = 0; i < a; ++i)
    if((k + m) * 2 + k + m == a) {
    cout << k << " " << (k + m) * 2 << " " << m;
    break;
    }
    else {
        k++; m++;
    }
}
