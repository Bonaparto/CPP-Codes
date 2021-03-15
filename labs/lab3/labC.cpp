#include <iostream>
using namespace std;
int main(){
 
 int n,m = -999999999; 

 cin >> n;

 int a[n];
 
 for(int i = 0; i < n; ++i){
    cin >> a[i];
}
        for(int i = 0; i < n; ++i){
        if(a[i] > m) m = a[i];
     } 
cout << m;
}