#include <iostream>
using namespace std;

int pass(int n, int *a, int h){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > h) cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int h;
    cin >> h;
    cout << pass(n, a, h);
}