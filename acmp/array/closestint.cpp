#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int x, y, max = 100000000; cin >> x; 
    for(int i = 0; i < n; ++i){
        if(x == a[i]){cout << x; return 0;}
        if(abs(a[i] - x) < max){ max = abs(a[i] - x); y = i;}
        if(abs(a[i] - x) == max && a[i] < a[y]) y = i;
    }
    cout << a[y];
}