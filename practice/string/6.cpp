#include <iostream>
using namespace std;
int main(){
    string s, ss; int cnt = 0;
    cin >> s >> ss;
    for(int i = 0; i < s.size(); ++i){
        if(s.substr(i,2) == ss) cnt++;
    }
    cout << cnt;
}