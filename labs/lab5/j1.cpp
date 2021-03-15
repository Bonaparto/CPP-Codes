#include <bits/stdc++.h>
using namespace std;
int main(){
    string one;
    cin >> one;
    int i = 0,l = one.size() - 1,cnt = 0;
    while(l != 0){
        if(one[i] == one[l]){
            l--; i++;
        }
        else{
            cnt++;
            if(cnt >= 2){
                cout << "NO";
                exit(0);
            }
            if(one[l-1] == one[i]) --l;
            else if(one[i+1] == one[l]) ++i;
            else{
                cout << "NO";
                exit(0);
            }

        }
    }
    cout << "YES";
}