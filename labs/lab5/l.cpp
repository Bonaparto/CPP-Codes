#include <bits/stdc++.h>
using namespace std;
int main(){
    string one;
    cin >> one;
    char b = one[0];
    for(size_t i = 1; i < one.size(); ++i){
        if(b > one[i]){
            cout << "NO";
            exit(0);
        }
        b = one[i];
    }
    cout << "YES";
}