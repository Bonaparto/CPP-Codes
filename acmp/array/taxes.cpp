#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[n], y = 0; int max = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i){
        double x; cin >> x;
        if((a[i] * x) / 100 > y){ max = i; y = ((a[i] * x) / 100);}
    }
    cout << max + 1;
}