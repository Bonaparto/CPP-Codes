#include <bits/stdc++.h>
using namespace std;
int main(){
    string one;
    cin >> one;
    int i = 0,l = one.size() - 1;
    while(l != 0){
        if(one.size() == 1){
            cout << "YES";
            exit(0);
        }
        if(one[i+1] != one[l]){ 
            cout << "NO";
            exit(0);
        }
        l--; i++;
    }
    cout << "YES";
}