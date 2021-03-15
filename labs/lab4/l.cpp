#include <iostream>
using namespace std;
int main(){
    long long n,m,sum = 0,x,y;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; ++j){
        int min = 1000000000;
        for(int i = 0; i < n; ++i){
            if(a[i][j] < min){
             min = a[i][j];
             x = i; y = j;
            }
        }
        cout << x+1 << ";" << y+1 << endl;
        sum += min;        
    }
    cout << endl << "Their sum:" << endl << sum;
}