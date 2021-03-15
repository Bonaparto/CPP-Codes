#include <iostream>
using namespace std;
int main(){
    int n, k=1;
    cin >> n;
    while(k*k <= n){
        cout << k*k << " ";
        k++;
    }
}