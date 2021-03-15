#include <iostream>
using namespace std;
int main(){
    int x,cnt = 0;
    char n;
    string one;
    cin >> one >> n >> x;
    for(size_t i = 0; i < one.size(); ++i){
        if(one[i] == int (n)) cnt++;
    }
    if(cnt == x) cout << "YES";
    else cout << "NO";
}