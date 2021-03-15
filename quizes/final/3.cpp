#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    stack <int> ss;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int max = 1;
    for(int i = 0; i < n; ++i){
        if(a[i] >= max){
            max = a[i];
            while(!ss.empty()){
                ss.pop();
            }
            ss.push(a[i]);
        }
        if(a[i] < max){
            while(1){
                if(ss.top() <= a[i]) ss.pop();
                else break;
            }
            ss.push(a[i]);
        }
    }
    cout << ss.size();
}