#include <iostream>
using namespace std;
int main(){
    int n,sum = 0,l = 1,count = 0,max = 0;
    cin >> n;
    while(sum < n){
        sum += l;
        l = sum - l;
        count++;
        }
    if(sum == n) cout << count;
    else cout << "-1";
} 