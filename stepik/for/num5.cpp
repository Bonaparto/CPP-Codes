#include <iostream>
using namespace std;
int main() {
  int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        if(a[i] > 0 && a[i-1] > 0){
            if(a[i] > a[i-1])
            cout << a[i-1] << " " << a[i];
            else cout << a[i] << " " << a[i-1]; 
            break;
        }
        else if(a[i] < 0 && a[i-1] < 0){
            if(a[i] < a[i-1])
            cout << a[i] << " " << a[i-1];
            else cout << a[i-1] << " " << a[i];
            break;
        }
    } 
}