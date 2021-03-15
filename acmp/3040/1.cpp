#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = stoi(s) + 3;
    cout << a << endl;
    string b = to_string(a) + '.';
    cout << b;
}