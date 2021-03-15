#include <bits/stdc++.h>
using namespace std;
int main(){
    string one;
    char a;
    cin >> a >> one;
    for(int i = 0; i < one.size(); i++){
        if(one[i] == a)
            continue;
        else cout << one[i];
    }
}