#include <bits/stdc++.h>
using namespace std;
int main(){
    string one;
    cin >> one;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < one.size(); i++){
        a[int(one[i]-48)]++;
    }
    for(int i = 0; i < 10; i++){
        if (a[i] != 0)
        cout << i << ": " << a[i] << endl;
    }
}