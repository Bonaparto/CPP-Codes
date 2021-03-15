#include <iostream>
using namespace std;

void bs(int a, int b){
    for(int i = a; i <= b; ++i){
        if(i % 7 == 1 || i % 7 == 2 || i % 7 == 5)
        cout << i << " ";
    }
}

int main(){
    int l,r;
    cin >> l >> r;
    int a[r-l];
    bs(l,r);
}