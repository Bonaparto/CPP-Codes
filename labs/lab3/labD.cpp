#include <iostream>
using namespace std;
int main(){
 
 int n,m = -999999999,l = 0; 

 cin >> n;

 int a[n];
 
 for(int i = 0; i < n; ++i){
    cin >> a[i];
}
        for(int i = 0; i < n; ++i){
        
        if(a[i] > m){
        m = a[i];
        l = i;}
        
    }
cout << l + 1;}