#include <iostream>
using namespace std;
int main(){
    int n, l;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> l;
    int b[l];
    for(int i = 0; i < l; ++i){
        cin >> b[i];
        a[b[i] - 1]--;
    }
    for(int i = 0; i < n; ++i){
        if(a[i] >= 0) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}