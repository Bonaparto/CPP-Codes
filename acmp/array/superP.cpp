#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    if(m <= 0){
        for(int i = (-1*m) % n; i < n; ++i) cout << a[i] << " ";
        for(int i = 0; i < (-1*m) % n; ++i) cout << a[i] << " ";
    }
    else{
        int b = n - m;
        if(m >= n) b = n - m % n;
        for(int i = b % n; i < n; ++i) cout << a[i] << " ";
        for(int i = 0; i < b % n; ++i) cout << a[i] << " ";
    }
}