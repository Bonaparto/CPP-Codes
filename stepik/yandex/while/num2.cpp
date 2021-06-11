#include <iostream>
using namespace std;
int main(){
    int m,k=2;
    cin >> m;
    while(k <= m){
    if(m % k == 0) break;           
    else k++;
    }
cout << k;
}