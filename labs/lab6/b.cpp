#include <iostream>
#include <cmath>
using namespace std;

void read(int n,int a[],int b[]){
    for(int i = 0; i < n; ++i)
        cout << abs(a[i] - b[i]) << " ";  
}

int main(){
    int n;
    int a[n],b[n];
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    read(n,a,b);
}