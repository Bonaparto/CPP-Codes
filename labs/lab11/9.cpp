#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if(s == s2){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while(next_permutation(s.begin(), s.end()));
    cout << "JOJO";
}