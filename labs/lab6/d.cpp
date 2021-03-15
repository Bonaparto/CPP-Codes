#include <iostream>
using namespace std;

void read(int n,int a,int x){
    bool l = false;
    for(int i = 0; i < n; ++i)
        if(a[i] == x){
            l = true;
            break;  
        }
    if(l) cout << "YES";
    else cout << "NO";
}

int main(){
    int n,x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> x;
    read(n,a,x);
}