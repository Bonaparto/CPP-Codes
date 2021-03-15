#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int sum = 0, m = 1, a1 = 0, a2 = 0;
    int b1 = a[0], b2 = a[0];
    for(int i = 0; i < n; ++i){
        if(a[i] > 0) sum += a[i];
        if(a[i] > b1){
            b1 = a[i];
            a1 = i;
        } 
        if(a[i] < b2){
            b2 = a[i];
            a2 = i;
        }
    }
    if(a1 > a2){
        for(int i = a2 + 1; i < a1; ++i){
            m = m * a[i]; 
        }
    }
    if(a2 > a1){
        for(int i = a1 + 1; i < a2; ++i){
            m = m * a[i]; 
        }
    }
    cout << sum << " "  << m;
}