#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >>a[i][j];
        }
    }
    
    for (int i=n-1; i>=0; i--){
        for (int j = 0; j+i < n; j++){
            cout<<a[j][j+i]<<" ";
        }
        cout<<endl;
    }
    
    for (int i=1; i<n; i++){
        for (int j=0; j+i<n; j++){
            cout<<a[j+i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}