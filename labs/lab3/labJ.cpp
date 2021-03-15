#include <iostream>
using namespace std;
int main(){
 
 int n,x,l = 0;

 cin >> n >> x;

 int a[n];
 
 for(int i = 0; i < n; ++i){
    cin >> a[i];
}
 for(int i = 0; i < n; ++i){
     if(x < a[0]) l = 0;
     else if(x > a[n - 1]) l = n;
     else if(x == a[i]) l = i + 1;
     else{
         for(int j = i; j < n; ++j){
            if(a[j] < x && a[i] > n)
            l = j + 1;
         }
     }
}
cout << l;
}