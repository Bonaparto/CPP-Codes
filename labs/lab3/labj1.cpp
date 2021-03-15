#include <iostream>
using namespace std;
int main(){
 
 int n,x,l = -1000000000,m = 1000000000,f;

 cin >> n >> x;

 int a[n];
 
 for(int i = 0; i < n; ++i){
    cin >> a[i];
}
 for(int i = 0; i < n; ++i){
     if(a[i] > a[l]) l = i;
     }
 for(int i = 0; i < n; ++i){
     if(a[i] < a[m]) m = i;
 }   
 for(int i = 0; i < n; ++i){
     if(x < a[m]) f = 0;
     else if (x > a[l]) f = n;
     else{
         if(x > a[i] && x < a[i + 1])
         f = i; 
     }
 }
cout << f; }