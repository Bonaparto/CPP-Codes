#include <bits/stdc++.h>
using namespace std;
int main(){
    int cntr = 0,cntf = 0;
    string s;
    getline(cin,s);
    for(size_t i = 0; i < s.size(); ++i){
        if(s[i] == 'R') cntr++;
        if(s[i] == 'L') cntr--;
        if(s[i] == 'F') cntf++;
        if(s[i] == 'B') cntf--;
    }
    if(cntr == 0 && cntf == 0) cout << "Chill Yelnur";
    else{
        if(cntf < 0){
            while(cntf != 0){
                cout << "F";
                cntf++;
            }
        }
        if(cntf > 0){
            while(cntf != 0){
                cout << "B";
                cntf--;
            }
        }
        if(cntr < 0){
            while(cntr != 0){
                cout << "R";
                cntr++;
            }
        }
        if(cntr > 0){
            while(cntr != 0){
                cout << "L";
                cntr--;
            }
        }
    } 
}