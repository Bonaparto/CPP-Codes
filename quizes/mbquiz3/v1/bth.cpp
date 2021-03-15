#include <iostream>
using namespace std;

bool homeornot(string n){
    int x = 0, y = 0;
    for(int i = 0; i < n.size(); ++i){
        if(n[i] == 'U') x++;
        if(n[i] == 'D') x--;
        if(n[i] == 'L') y++;
        if(n[i] == 'R') y--;
    }
    return(x == y & x == 0);
}

int main(){
    string n;
    cin >> n;
    cout << (homeornot(n)?"True":"False");
}