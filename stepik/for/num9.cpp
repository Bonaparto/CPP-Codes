#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    if(n % 2 == 0){
        for(int i = 0; i < n; i += 2){
            swap(a[i],a[i+1]);
            }
    }
    else{
        for(int i = 0; i < n; i += 2){
            if(i != n - 1)
                swap(a[i],a[i+1]);
        }
    }
    for(int i = 0; i < n; ++i)
        cout << a[i];
}