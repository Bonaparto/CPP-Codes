#include <iostream>
using namespace std;
int main(){
 
 int n,k,k1,m;
 long long sum = 0; 

 cin >> n >> k >> k1;

 int a[n];
 
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        m = i + 1;
        if(k <= m && k1 >= m) sum += a[i];
    }
cout << sum;
}