#include <iostream>
using namespace std;
int main(){
int n,k = 1,sum = 0,l = 1;
    cin >> n;
        while(k <= n){
            k++;
            sum += l;
            l = sum - l;
            }
    cout << sum;
} 