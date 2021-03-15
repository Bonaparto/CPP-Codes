#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int c = 0;
    while((c = a.find(b, c)) != string :: npos){
        c++;
        cout << c - 1 << endl;
    }
}