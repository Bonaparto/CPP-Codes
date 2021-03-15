#include <bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin >> s;
    cout << "The anagram variants for string ";
    cout << s << " are:" << endl;
    sort(s.begin(), s.end());
    do{
        for(int i = 0; i < s.size(); ++i){
            cout << s[i];
        }
        cout << endl;
    } while(next_permutation(s.begin(),s.end()));
}