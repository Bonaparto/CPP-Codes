#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << "The anagram variants for string cat are:" << endl;
    do{
        for(int i = 0; i < s.size(); ++i){
            cout << s[i];
        }
        cout << endl;
    } while(next_permutation(s.begin(),s.end()));
}