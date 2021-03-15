#include <iostream>
using namespace std;

int posl(int l, int a){
    if(a == 0) return 1;
    return posl(l, a - 1) * l;
}

int main(){
    int n, d;
    cin >> n >> d;
    cout << posl(n, d);
}