#include <iostream>
using namespace std;
int main(){
 
int n,k,k1;

cin >> n >> k >> k1;

int a[n];
 
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    k--;
    k1--;
    for(int i = k; k < k1; ++k && --k1){         
            a[k] = a[k] + a[k1];
            a[k1] = a[k] - a[k1];
            a[k] = a[k] - a[k1];  
    }
    for(int i = 0; i < n; ++i){  
        cout << a[i] << " "; 
    }
}