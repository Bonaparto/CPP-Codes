#include <iostream>
using namespace std;
int main(){
 
 int n,k,f,l = 1000000000 ,m = 1; 

 cin >> n;

 int a[n];
 
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
       if(a[i] >= m)
        m = a[i];
        f = i;
    }
    for(int i = 0; i < n; ++i){
        if(a[i] <= l){
        l = a[i];
        k = i;
    }}
    for(int i = 0; i < n; ++i){
        if(a[i] == m) a[i] = l;
        cout << a[i] << " ";
    }
}