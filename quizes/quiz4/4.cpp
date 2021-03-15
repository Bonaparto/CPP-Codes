#include <bits/stdc++.h>
using namespace std;
int main(){
    string n, m;
    cin >> n >> m;
    size_t pos = 0;
    while((pos = n.find(m, pos)) != string :: npos){
        pos++;
        cout << pos - 1 << " ";
    }
}