#include <iostream>
using namespace std;
int main(){
    int room, cond; string mode;
    cin >> room >> cond >> mode;
    if(mode == "freeze"){
        if(room <= cond) cout << room;
        else cout << cond;
    }
    else if(mode == "heat"){
        if(room >= cond) cout << room;
        else cout << cond;
    }
    else if(mode == "auto") cout << cond;
    else cout << room;
}