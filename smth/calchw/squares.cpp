#include <iostream>
using namespace std;
int main(){
    int A,B,n;
    cin >> A >> B;
    n = B - A;
    int a[n];
    for(int i = A; i <= B; ++i){
        a[i] = i;
    }
    for(int i = A; i <= B; ++i){
            if(a[i] % 2 == 0) 
                cout << a[i] * a[i] << " ";
    }
}