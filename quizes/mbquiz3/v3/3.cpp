#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n.size(); ++i){
        if(isdigit(n[i]))
        sum += n[i] - 48;
    }
    cout << sum;
}