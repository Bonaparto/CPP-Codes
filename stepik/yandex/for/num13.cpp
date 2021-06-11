#include <iostream>
using namespace std;
int main(){
    int a[16];
    for(int i = 0; i < 16; ++i){
        cin >> a[i];
    }
    int n = 1;
    while(n < 15){
        for(int i = n; i < 16; i = i + 2){
            if(((a[i] == a[n]) || (a[i-1] == a[n-1]))
            && n != i){
                cout << "YES";
                return 0;
            }
        }
        for(int i = n; i < 16; i = i + 2){
            if(n != i &&
            ((a[n-1] + a[i] == a[i-1] + a[n]) ||
            (a[n-1] - a[i] == a[i-1] - a[n]))){
                cout << "YES";
                return 0;
            }
        }
        n = n + 2;
    }
    cout << "NO";
}