#include <iostream>
using namespace std;
int main(){
    int n,max = 0,bmax = 0;
    cin >> n;
    max = n;
        while(n != 0){
        cin >> n;
        if(n >= max){
        bmax = max;
        max = n;
        }
        else if(n < max && n >= bmax){
        bmax = n;
        }    
    } cout << bmax;
}