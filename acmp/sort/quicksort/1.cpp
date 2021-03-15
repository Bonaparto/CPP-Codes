#include <iostream>
#include <algorithm>
using namespace std;

int a[100005], n;

void quicksort(int l, int r){
    if(l < r){
        int x = a[(l + r) / 2];
        int L = l, R = r;
        while(L <= R){
            while(a[L] < x) L++;
            while(a[R] > x) R--;
            if(L <= R){
                swap(a[L], a[R]);
                L++; R--;
            }
        } 
        quicksort(L, r);
        quicksort(l, R);
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    quicksort(0, n-1);
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
}