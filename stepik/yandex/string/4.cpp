#include <iostream>
using namespace std;
int main(){
    string n;
    int cnt = 0;
    getline(cin,n);
    char l = ' ';
    size_t pos = 0;
    while(n.find(l, pos) != string::npos){
        cnt++;
        pos = n.find(l, pos) + 1;
    }
    if (cnt != 0) cout << cnt + 1;
    else cout << cnt;
}