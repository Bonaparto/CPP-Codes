#include <iostream>
using namespace std;
int main(){
    string s, m;
    cin >> s;
    int cnt = 0;
    while(cin >> m){
        if(s == m){
            cnt++;
        }
    }
    cout << cnt;
}   