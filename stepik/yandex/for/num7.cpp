#include <iostream>
using namespace std;
int main(){
  int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    } int min = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] % 2 != 0)
        min = a[i];
    }
    for(int i = 0; i < n; ++i){
        if(a[i] % 2 != 0 && a[i] < min)
            min = a[i];
        } 
        cout << min;
} 